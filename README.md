# Command-Line Calculator in C

An introductory C exercise with addition, subtraction, multiplication, division, and an interactive repeat prompt. Division by zero is handled with an error message.

## Build and run

```bash
gcc -std=c11 -Wall -Wextra calculadora.c -o calculadora
./calculadora
```

On Windows, run `calculadora.exe`.

## Limitations

Input uses `scanf` for integers and does not validate nonnumeric input. Division displays a result with two decimal places.
