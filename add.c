#include "monty.h"
/**
 * add - a function that adds the top numbers
 * @stack: a pointer to the stack
 * @line_number: the number of lines
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *aux, *node;

	(void)line_number;
	if ((*stack)->next != NULL)
	{
		(*stack)->next->n += (*stack)->n;
	}
	temp = *stack;
	if (temp != NULL)
	{
		aux = temp->next;
		node = temp;
		if (aux != NULL)
			aux->prev = NULL;
		free(node);
		*stack = aux;
	}
}
