#include "monty.h"
/**
 * nop_handler - Does nothing.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file.
 * Return: No return value.
 */
void nop_handler(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
