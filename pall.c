#include "monty.h"

/**
 * pall - prints every element in the stack from top to bottom
 *
 * @stack: pointer to head node
 * @line_number: current line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
