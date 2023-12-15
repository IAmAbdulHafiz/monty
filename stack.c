#include "monty.h"
/**
 * stack_handler - Sets the stack mode.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file.
 * Return: No return value.
 */
void stack_handler(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	bus.lifi = 0;
}
