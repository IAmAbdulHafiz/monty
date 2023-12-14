#include "monty.h"
/**
 * swap_handler - Swaps the top two elements of the stack.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file.
 * Return: No return value.
 */
void swap_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int len = 0, temp;

	while (current)
	{
		current = current->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	current = *stack;
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}
