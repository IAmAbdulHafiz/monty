#include "monty.h"
/**
 * rotl_handler - Rotates the stack to the top.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file.
 * Return: No return value.
 */
void rotl_handler(stack_t **stack, __attribute__((unused))
		unsigned int line_number)
{
	stack_t *tmp = *stack, *aux;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	aux = (*stack)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = tmp;
	(*stack) = aux;
}
