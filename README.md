# C basics quiz

A terminal quiz with five multiple-choice questions about C. It prints feedback after each answer and a score at the end.

## Run

You need GCC or another C compiler. From this folder:

```sh
gcc -std=c11 -Wall -Wextra main.c -o quiz
./quiz
```

On Windows PowerShell, compile with `-o quiz.exe` and run `./quiz.exe`.

Enter an option from 1 to 3 for each question. The answers `1, 2, 3, 3, 1` give a score of 5/5. Invalid input ends the program with a message.

## Concepts

Arrays, strings, loops, conditions, and console input/output.

## Possible next change

Add a replay option or shuffle the question order.
