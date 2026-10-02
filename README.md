# Number Guessing Game (C++)

A beginner console guessing game written in C++ as a first-year BS IT learning project. My first project using `<random>`.

## What it does

- Picks a random number from 1 to 10 each time the program runs
- Asks the player to enter a guess
- Gives a hint after every wrong guess: guess higher or guess lower
- Keeps asking until the player guesses correctly, then shows the number

## Concepts practiced

Random number generation (`random_device`, `mt19937`, `uniform_int_distribution`), `cin` / `cout`, `if` / `else if` / `else`, and `do-while` loops.

## Status and planned work

- [x] Random number generation
- [x] Higher / lower hints
- [x] Loop until the correct guess
- [ ] Count the number of attempts
- [ ] Let the player choose the number range or difficulty
- [ ] Add a "play again" option
- [ ] Input validation for guesses outside 1-10
- [ ] Refactor into functions

## How to run

```bash
g++ main.cpp -o guessing_game
./guessing_game
```

On Windows, run `guessing_game.exe` instead.
