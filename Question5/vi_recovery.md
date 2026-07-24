# Recovery Mechanisms in vi Editor

## 1. Swap Files

vi automatically creates a swap (.swp) file while editing. If the editor or system crashes, the swap file stores unsaved changes. The file can be recovered using:

## 2. Undo History

The `u` command undoes the most recent change, while `Ctrl + R` redoes changes. This is useful only during the current editing session.

## 3. Registers

Registers temporarily store deleted, copied, and yanked text. They allow users to recover recently modified content within the current editing session.

## 4. Backup Files

If backup is enabled using the `backup` option, vi creates a backup copy of the original file before saving. This provides protection against accidental modifications.

## 5. Auto-Recovery

When vi detects an existing swap file after a crash, it prompts the user to recover the file. This restores most unsaved work and minimizes data loss.

# Most Reliable Recovery Strategy

The most reliable recovery strategy is to use **swap files together with backup files**. Swap files preserve unsaved changes after unexpected crashes, while backup files retain the last saved version of the file. Using both mechanisms provides maximum protection against data loss and ensures that work can be recovered even if the system fails unexpectedly.