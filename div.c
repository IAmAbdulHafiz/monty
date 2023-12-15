#include "monty.h"
/**
 * div_handler - Divides the top two elements of the stack.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file.
 * Return: No return value.
 */
void div_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int len = 0, result;

	while (current)
	{
		current = current->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	current = *stack;

	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	result = current->next->n / current->n;
	current->next->n = result;
	*stack = current->next;
	free(current);
}
