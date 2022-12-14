#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 *
 * @stack: pointer to head node
 * @line_number: current line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*stack)->n);
	}
}
