#include "monty.h"
/**
 * free_stack - free the stack.
 * @stack: the stack ro be freed
 *
 * Return: Nothing.
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
		return;
	while (*stack != NULL)
	{
		tmp = *stack;
		*stack = tmp->next;
		free(tmp);	
	}
}
