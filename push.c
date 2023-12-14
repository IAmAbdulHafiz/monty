#include "monty.h"

/**
 * push_handler - Handles the "push" instruction.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty bytecode file.
 * Return: No return value.
 */
void push_handler(stack_t **stack, unsigned int line_number)
{
	int num, i = 0, negative = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			negative++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > '9' || bus.arg[i] < '0')
				negative = 1;
		}
		if (negative)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(bus.file);
			free(bus.content);
			free_stack(*stack);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	num = atoi(bus.arg);

	if (bus.lifo == 0)
		push_stack(stack, num);
	else
		push_queue(stack, num);
}

