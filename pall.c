#include "monty.h"
/**
 * pall_handler - Prints all the elements of the stack.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file (not used).
 * Return: No return value.
 */
void pall_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void) line_number;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
