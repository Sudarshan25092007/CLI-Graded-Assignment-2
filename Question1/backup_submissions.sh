#!/bin/bash

SUBMISSIONS="submissions"
BACKUP="backup"
REPORT="report.txt"
ERROR_LOG="errors.log"

mkdir -p "$BACKUP"

> "$REPORT"
> "$ERROR_LOG"

processed=0
duplicates=0
backedup=0

declare -A hashes

while IFS= read -r file
do
    ((processed++))

    hash=$(md5sum "$file" 2>>"$ERROR_LOG" | awk '{print $1}')

    if [[ -z "${hashes[$hash]}" ]]; then
        hashes[$hash]=1

        filename=$(basename "$(dirname "$file")")_$(basename "$file")
        cp "$file" "$BACKUP/$filename" 2>>"$ERROR_LOG"

        ((backedup++))
    else
        ((duplicates++))
    fi

done < <(find "$SUBMISSIONS" -type f 2>>"$ERROR_LOG")

echo "Files Processed : $processed" > "$REPORT"
echo "Duplicate Files : $duplicates" >> "$REPORT"
echo "Backed Up Files : $backedup" >> "$REPORT"

echo "Processing completed successfully."
