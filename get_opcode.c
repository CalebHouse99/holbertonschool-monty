#include "monty.h"
<<<<<<< HEAD

/**
 * get_opcode - gets 
 * 
 * @str: string
 * @stack: pointer to head node
 * @line_number: current line number 
 */

int (*get_opcode(char *str))(stack_t **stack, unsigned int line_number)
{

}
=======
/**
 * get_opcode - 
 */
void get_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t opcode_list[] = OPCODE;

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

>>>>>>> James
