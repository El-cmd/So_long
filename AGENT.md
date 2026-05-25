# AGENT.md

## Project Snapshot
- Repository: `El-cmd/So_long`
- Default branch: `master`
- Detected stack: C, shell scripts
- Notable root entries: `assets/`, `include/`, `map/`, `mlx/`, `srcs/`, `Textures/`, `Makefile`, `readme.md`, `so_long.c`
- Source mix: .c:64, .xpm:17, .3:5, .1:5, .h:3, .md:2

## Working Guidelines
- Keep changes scoped to the requested behavior and follow the style already present in the touched files.
- Check `README.md`, `Makefile`, package scripts, and Docker files before introducing new commands or tooling.
- Preserve the existing C/C++ layout and Makefile conventions; avoid committing binaries, object files, or local test outputs.
- Do not commit local secrets, `.env` files, generated dependency folders, build artifacts, or editor metadata.

## Setup
- `No explicit dependency install command is defined in the repository.`

## Run
- `No canonical run command is defined; inspect README/Makefile/package scripts first.`

## Validate
- `make`
- `make re`
- `make clean`
- `make fclean`

## Makefile Targets Detected
- `all`, `bonus`, `clean`, `fclean`, `re`
