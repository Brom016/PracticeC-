#!/bin/bash

PROJECT_DIR="/c/Users/USER/Documents/Algoritma_Pemrograman/tugasbab"

COMMIT_MESSAGE="Update: $(date '+%Y-%m-%d %H:%M:%S')"

cd "$PROJECT_DIR" || exit

git add .

git commit -m "$COMMIT_MESSAGE"

git push origin main