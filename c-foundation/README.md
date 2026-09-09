# C Foundation

C written from scratch — no frameworks, no libraries beyond the standard ones.
Structs, pointers, strings, and functions built by hand to understand what's
actually happening before leaning on abstractions.

This is the groundwork behind the embedded projects in this repo. Writing C
for a Pico or an ESP32 is a lot less guesswork when you already know what a
pointer does to memory, why `strcmp` exists, and how a struct gets passed
through a function.

## Projects

| File | What it is |
|---|---|
| `Contact_book.c` | Contact book — struct array, fgets, search with do-while + found flag, split into input / add / display / search functions |
| `Perfume velocity.c` | Price tracker — struct, pointers, discount function, version history pattern |
| `Calculator velocity.c` | Calculator — functions, switch, user input loop |

## Debug Exercises

Five sets of buggy C programs — one bug each, find and fix it.
Covers the mistakes that actually come up: missing `&` in scanf, wrong format
specifier, `==` on strings, pointer arithmetic instead of dereference, wrong
struct access syntax.

See [`debug-exercises/`](debug-exercises/) for the exercise files.

## What's practiced

- Structs and struct arrays
- Pointers — passing by reference, dereferencing, pointer to array in a loop
- String functions — `strcpy`, `strcmp`, `strcat`, `fgets`
- Functions with `int *count` parameters that modify the caller's variable
- do-while loops for repeated input
- Found-flag pattern for search
- Current-best pattern for finding a maximum
