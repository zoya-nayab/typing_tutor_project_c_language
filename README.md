# Typing Tutor C Project

A simple **Typing Tutor program** written in C with multiple difficulty levels to help improve typing speed and accuracy.

---

## Project Description
This program allows users to practice typing with two difficulty modes: **Easy** and **Medium**.  
It tracks typing speed (WPM) and accuracy, and saves high scores to a file.

---

## Files in the Project

| File | Purpose |
|------|---------|
| `main.c` | Main program file that handles user input, timing, accuracy, and typing logic. |
| `typing_functions.h` | Contains functions to display instructions, save high scores, and display high scores. |
| `typing_text.h` | Contains the typing text for different difficulty levels (Easy & Medium). |
| `.gitignore` | Ignores compiled files and temporary files when uploading to GitHub. |
| `LICENSE` | MIT License for free usage and distribution. |
| `README.md` | This file, describing the project. |

---

## How to Compile and Run

### 1. Compile the program
Open your terminal or command prompt in the project folder and run:

```bash
gcc main.c -o typing_tutor
