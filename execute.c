#include "monty.h"
/**
 * execute_opcode - Executes the specified opcode.
 * @content: Line content from Monty bytecode file.
 * @stack: Head of the linked list (stack).
 * @counter: Line counter.
 * @file: Pointer to the Monty file.
 * Return: 0 if successful, 1 otherwise.
 */
int execute_opcode(char *content, stack_t **stack,
		unsigned int counter, FILE *file)
{
	instruction_t opcodes[] = {
		{"push", push_handler}, {"pall", pall_handler}, {"pint", pint_handler},
		{"pop", pop_handler}, {"swap", swap_handler}, {"add", add_handler},
		{"nop", nop_handler}, {"sub", sub_handler},
		{"div", div_handler},
		{"mul", mul_handler},
		{"mod", mod_handler},
		{"pchar", pchar_handler},
		{"pstr", pstr_handler},
		{"rotl", rotl_handler},
		{"rotr", rotr_handler},
		{"queue", queue_handler},
		{"stack", stack_handler},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *opcode;

	opcode = strtok(content, " \n\t");
	if (opcode && opcode[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opcodes[i].opcode && opcode)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (opcode && opcodes[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, opcode);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
