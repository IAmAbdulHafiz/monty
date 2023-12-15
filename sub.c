#include "monty.h"
/**
 * sub_handler - Subtracts the top element of the stack from the
 * second top element.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file.
 * Return: No return value.
 */
void sub_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int result, nodes;

	aux = *stack;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	result = aux->next->n - aux->n;
	aux->next->n = result;
	*stack = aux->next;
	free(aux);
}
