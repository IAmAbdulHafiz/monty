#include "monty.h"
/**
 * pstr_handler - Prints the string starting at the top of the stack.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file (not used).
 * Return: No return value.
 */
void pstr_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void) line_number;

	while (current && current->n > 0 && current->n <= 127)
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
