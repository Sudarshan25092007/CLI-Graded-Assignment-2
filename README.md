# Linux Graded Lab Assignment (Modules 5–10)

## Student Information

- **Name:** Sudarshan Patil H J
- **Course:** Linux Programming
- **Assignment:** Graded Lab Assignment (Modules 5–10)

---

# Repository Structure

```
CLI-Graded-Assignment-2/
│
├── Question1/
│   ├── backup_submissions.sh
│   ├── submissions/
│   ├── backup/
│   ├── outputs/
│   ├── screenshots/
│   ├── commands.txt
│   ├── explanation.txt
│   ├── report.txt
│   └── errors.log
│
├── Question2/
│   ├── process_monitor.c
│   ├── outputs/
│   ├── screenshots/
│   ├── commands.txt
│   └── explanation.txt
│
├── Question3/
│   ├── employee_records.c
│   ├── employees.dat
│   ├── outputs/
│   ├── screenshots/
│   ├── commands.txt
│   └── explanation.txt
│
├── Question4/
│   ├── server.log
│   ├── error_report.txt
│   ├── outputs/
│   ├── screenshots/
│   ├── commands.txt
│   └── explanation.txt
│
├── Question5/
│   ├── vi_recovery.md
│   ├── outputs/
│   ├── screenshots/
│   ├── commands.txt
│   └── explanation.txt
│
└── README.md
```

---

# Assignment Overview

## Question 1 – Shell Scripting

**Objective**

- Identify duplicate assignment submissions.
- Create backups of unique submissions.
- Generate a processing report.
- Store errors in a separate log file.

**Technologies Used**

- Bash Shell Script
- `find`
- `md5sum`
- `cp`
- Redirection operators

---

## Question 2 – Process Management in C

**Objective**

- Create child processes using `fork()`.
- Monitor child execution.
- Prevent zombie processes using `waitpid()`.
- Terminate unresponsive processes using `SIGKILL`.

**System Calls Used**

- `fork()`
- `waitpid()`
- `kill()`
- `signal()`

---

## Question 3 – Linux File System Calls

**Objective**

- Create a file.
- Write employee records.
- Update a specific record using `lseek()`.
- Read records efficiently.

**System Calls Used**

- `open()`
- `read()`
- `write()`
- `lseek()`
- `close()`

---

## Question 4 – Linux Command Pipeline

**Objective**

- Monitor log files in real time.
- Filter ERROR messages.
- Generate an error report.
- Suppress unnecessary output.

**Linux Commands Used**

- `tail`
- `grep`
- Pipes (`|`)
- Redirection (`>`, `>>`)
- `/dev/null`

---

## Question 5 – vi Recovery Mechanisms

**Topics Covered**

- Swap Files
- Undo History
- Registers
- Backup Files
- Auto-Recovery
- Recovery using `vi -r`

---

# Repository Contents

Each question folder contains:

- Source code / Shell script
- Commands executed
- Command explanations
- Output files
- Screenshots
- Supporting files (if applicable)

---

# Software Used

- Ubuntu (WSL)
- Visual Studio Code
- Git
- GitHub
- GCC Compiler
- Bash Shell

---

# Submission Note

This repository was created as part of the **Linux Graded Lab Assignment (Modules 5–10)**.

Each question has been completed in its respective folder with the required source files, outputs, screenshots, commands executed, and explanations.

---
