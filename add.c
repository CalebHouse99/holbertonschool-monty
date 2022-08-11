#include "monty.h"

/**
 * add - adds the top two elements of a stack
 *
 * @stack: pointer to head node
 * @line_number: current line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int i;

	for (i = 0; tmp != NULL; tmp = tmp->next, i++)
		;
	if (i < 0)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
}
