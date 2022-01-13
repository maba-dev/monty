#include "monty.h"
/**
 *pall -  prints all the values on the stack,
 *@stack: V
 *@y: V
 */
void pall(stack_t **stack, unsigned int y)
{
	stack_t *copy = *stack;
	(void)y;
	if (stack == NULL)
	{
		return;
	}
	while (stack != NULL)
	{
		printf("%d\n", copy->n);
		copy = copy->next;
	}
}
