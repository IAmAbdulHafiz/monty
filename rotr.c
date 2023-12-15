#include "monty.h"
/**
 * rotr_handler - Rotates the stack to the bottom.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file (unused).
 * Return: No return value.
 */
void rotr_handler(stack_t **stack, __attribute__((unused))
		unsigned int line_number)
{
	stack_t *copy, *last;

	copy = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}

	last = *stack;
	while (last->next)
	{
		last = last->next;
	}

	last->next = copy;
	last->prev->next = NULL;
	last->prev = NULL;
	copy->prev = last;
	*stack = last;
}
