#include "monty.h"

/**
 * push - adds to top of stack
 * @stack: to add to
 * @line_number: current line number
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);

	if (*stack == NULL)
	{
		new->next = NULL;
	}
	else
	{
		(*stack)->prev = new;
		new->prev = NULL;
		new->next = *stack;
	}
}
