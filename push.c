#include "monty.h"
/**
 *_push - prototype
 *@stack:V
 *@x:V
 */
void _push(stack_t **stack, char *npush, unsigned int line_number)
{
	stack_t *element;

	element = malloc(sizeof(*element));
	if (element == NULL)
	{
		exit(EXIT_FAILURE);
	}
	element->n = x;
	element->next = *stack;
}
