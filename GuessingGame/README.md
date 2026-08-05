# Number Guessing Game

A console-based number guessing game built in C. My first complete project
built from scratch outside of school — I wanted to practice loops, time
tracking, and input handling in one place.

## Game modes

Six modes split between standard and challenge (limited guesses):

| Mode | Range | Guess limit |
|---|---|---|
| Easy | 1–10 | unlimited |
| Super Easy | 1–10 | 3 guesses |
| Normal | 1–50 | unlimited |
| Super Normal | 1–50 | 5 guesses |
| Hard | 1–90 | unlimited |
| Super Hard | 1–100 | 8 guesses |

After each game you get a rank (Legendary, Pro, or just Congratz) based on
how fast you were and how many guesses you used.

## How to build

Standard C — no external dependencies.

```bash
gcc GuessingGame.c -o GuessingGame
./GuessingGame
```

Note: uses `system("cls")` for screen clearing, which works on Windows.
On Linux/macOS replace `cls` with `clear`.

## What I learned

- `do-while` loops for game logic that must run at least once
- `time()` and `difftime()` for elapsed time tracking
- `srand(time(NULL))` to seed the random number generator
- Input buffer handling with `while(getchar() != '\n')`
