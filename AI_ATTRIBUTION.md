# AI Assistance Attribution

## Assignment 2 - File Operations and Cross Compiler

OpenAI Codex/ChatGPT was used as a collaborative programming assistant for
Assignment 2.

### Full chat history

https://chatgpt.com/s/cx_6a973d28490c81918a2b1329cff8fb72

### AI-assisted files

- `finder-app/writer.c`
- `finder-app/Makefile`
- `finder-app/finder-test.sh`
- `AI_ATTRIBUTION.md`
- `AI_HANDOFF.md`
- `AGENTS.md`

### Assistance provided

AI assistance was used to:

- Draft the implementation of `finder-app/writer.c`.
- Implement argument validation, C file I/O, syslog setup, and file-operation
  error handling in `writer.c`.
- Draft `finder-app/Makefile` with native compilation, `CROSS_COMPILE`
  support, compiler warnings, and a `clean` target.
- Identify the required changes to the course-provided
  `finder-app/finder-test.sh`.
- Add native clean/build commands to `finder-test.sh`.
- Replace the invocation of `writer.sh` with the compiled `writer`
  application.
- Explain the commands used to capture compiler version, configuration, and
  sysroot information in `assignments/assignment2/cross-compile.txt`.
- Explain native and AArch64 build verification and the creation of
  `assignments/assignment2/fileresult.txt`.
- Assist with Git remotes, SSH pushing, and moving a self-hosted GitHub Actions
  runner between assignment repositories.
- Interpret the course AI-attribution policy and draft repository guidance for
  future AI-assisted assignments.

### Course starter code

`finder-app/finder-test.sh` was supplied by the course. AI assistance changed
only the native clean/build commands and the command invoking `./writer`.
The remainder of that script is course starter code and is not represented as
AI-generated.

The repository structure, automated tests, GitHub Actions workflow, and other
starter files originated from the course assignment repository.

### Student review and verification

The student:

- Entered and integrated the suggested code.
- Compiled `writer.c` with `-Wall -Wextra -Werror`.
- Tested successful file writing.
- Tested missing arguments.
- Tested failure when the destination directory did not exist.
- Confirmed successful operations and errors were recorded in
  `/var/log/syslog`.
- Built and identified both native x86-64 and ARM AArch64 executables.
- Ran `finder-test.sh` and confirmed it returned `success`.
- Ran `full-test.sh` and confirmed it passed.
- Pushed the repository and confirmed the latest GitHub Actions workflow
  passed.

### External code and sources

No external implementation code and no other student's assignment were used.

Sources consulted for requirements or operational guidance included:

- ECEN 5713 Assignment 1 and Assignment 2 instructions.
- ECEN 5713 Class 1 Fall 2026 lecture slides, particularly slides 7-16
  covering academic integrity and LLM attribution.
- Course-provided AESD starter repository and test scripts.
- Official GitHub documentation for SSH remotes and self-hosted runner
  registration/removal.

### Other student assignments

No other student's assignment was used, supplied to the AI, or referenced when
developing this submission.
