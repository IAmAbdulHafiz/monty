#include "monty.h"
/**
 * queue_handler - Sets the stack to queue mode.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file.
 * Return: No return value.
 */
void queue_handler(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack.
 * @n: New value.
 * @stack: Pointer to the head of the stack.
 * Return: No return value.
 */
void addqueue(stack_t **stack, int n)
{
	stack_t *new_node, *aux;

	aux = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

