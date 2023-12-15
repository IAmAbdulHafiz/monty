# Monty Language Interpreter

## Overview

This project is a Monty language interpreter implemented in C.
The Monty language is a scripting language that is first compiled into Monty byte codes,
similar to Python. The interpreter relies on a unique stack with specific instructions to manipulate it.

## Description
This project is a Monty language interpreter implemented in C. The Monty language is a simple, stack-based programming language.

## Features
- Supports basic stack operations: push, pop, swap, add, subtract, multiply, divide, modulus, and more.
- Implements both stack and queue data structures.
- Handles Monty bytecode files and executes instructions.

## Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/monty-interpreter.git
    cd monty-interpreter
    ```
2. Compile the source code:
    ```bash
    gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
    ```

## Usage
Run the Monty interpreter with a Monty bytecode file:
```bash
./monty your_bytecode_file.m
```

## Project Structure

- `src/`: Contains the source code files.
- `include/`: Contains the header file(s).
- `tests/`: Includes test cases.
- `README.md`: Project documentation.
- `monty`: Executable file after compilation.
- `Makefile`: Build automation script.

## Requirements

- Allowed editors: vi, vim, emacs.
- Compilation on Ubuntu 20.04 LTS using gcc with specific options.
- Follow the Betty style for coding.
- GitHub repository with one project repository per group.

## Data Structures

### `stack_t`

```c
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```
## Error Handling
If no file or more than one argument is provided, the program will exit with EXIT_FAILURE.
If the file cannot be opened, an error message will be displayed, and the program will exit with EXIT_FAILURE.
If an invalid instruction is encountered, an error message with the line number will be printed, and the program will exit with EXIT_FAILURE.
Memory allocation errors will be handled with an error message, and the program will exit with EXIT_FAILURE.
Testing

## Contributors
- Abdul-Hafiz Yussif
- Email: abdulhafiz.yussif@aiesec.net
- GitHub Username: ImAbdulHafiz

- Florence Obiri Manu
- Email: florenceobirimainoo@gmail.com
- GitHub Username: Flo20201994

## License
This project is licensed under the MIT License.

Feel free to further customize this template based on your project's specific details.
