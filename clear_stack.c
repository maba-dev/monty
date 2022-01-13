#include "monty.h"
/**
 *clear_stack - free
 *@stack: V
 */
void clear_stack(stack_t *stack)
{
	stack_t *element;

	if (stack == NULL)
	{
		return;
	}
	while (stack != NULL)
	{
	element = stack;
	element = stack->next;
	free(element);
	}
}
