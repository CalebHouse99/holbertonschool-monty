#include "monty.h"
/**
 * get_opcode - function that finds opcode functions.
 * @opcode: opcode command.
 * @stack: the stack.
 * @line_number: line number
 *
 * Return: Nothing.
 */
void get_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t opcode_list[] = OPCODES; /*opcode macro in header*/

	while (opcode_list[i].opcode)
	{
		if (strcmp(opcode_list[].opcode, opcode) == 0)
		{
			opcode_list[i].f(stack, line_number);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
