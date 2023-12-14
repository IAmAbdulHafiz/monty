# Monty Language Interpreter

## Overview

This project is a Monty language interpreter implemented in C.
The Monty language is a scripting language that is first compiled into Monty byte codes,
similar to Python. The interpreter relies on a unique stack with specific instructions to manipulate it.

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
## Compilation & Execution
Compile the code using the following command:
```c
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
Execute the interpreter:
```c
$ ./monty
```

## Error Handling
If no file or more than one argument is provided, the program will exit with EXIT_FAILURE.
If the file cannot be opened, an error message will be displayed, and the program will exit with EXIT_FAILURE.
If an invalid instruction is encountered, an error message with the line number will be printed, and the program will exit with EXIT_FAILURE.
Memory allocation errors will be handled with an error message, and the program will exit with EXIT_FAILURE.
Testing
Collaboratively work on a set of tests in the tests/ directory to ensure the interpreter's correctness.

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
