#include "monty.h"

/**
 * add - adds the top two elements of a stack
 *
 * @stack: pointer to head node
 * @line_number: current line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next = (*stack)->next + *stack;
	pop(stack, line_number);
}
