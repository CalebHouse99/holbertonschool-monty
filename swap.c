#include "monty.h"

/**
 * swap - swaps the top two elements on top of the stack
 *
 * @stack: pointer to head node
 * @line_number: current line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if ((*stack)->next == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next->n;
	(*stack)->next->n = (*stack)->n;
	(*stack)->n = tmp;

}
