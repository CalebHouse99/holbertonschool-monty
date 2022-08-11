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
	char *arg = Arg.argument;
	int i;
	int convert;
	stack_t *new = NULL;
	(void) line_number;

	if (arg == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; arg[i] != '\0'; i++)
	{
		if ((isdigit(arg[i])) == 0 && arg[i] != '-')
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);	
		}
	}
	
	convert = atoi(arg);
	new = malloc(sizeof(stack_t));

	new->n = convert;
	new->prev = NULL;
	new->next = *stack;
	*stack = new;
}
