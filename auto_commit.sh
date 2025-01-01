#!/bin/bash

# Direktori proyek
PROJECT_DIR="/c/Users/USER/Documents/Algoritma_Pemrograman/tugasbab"

# Pesan commit
COMMIT_MESSAGE="Auto commit: $(date '+%Y-%m-%d %H:%M:%S')"

# Navigasi ke direktori proyek
cd "$PROJECT_DIR" || exit

# Tambah semua file ke staging area
git add .

# Buat commit
git commit -m "$COMMIT_MESSAGE"

# Push ke branch default (main/master)
git push origin main
