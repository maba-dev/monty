#include "monty.h"
/**
 *pall -  prints all the values on the stack,
 *@stack: V
 *@y: V
 */
void pall(stack_t **stack)
{
	stack_t *copy = *stack;

	if (*stack == NULL)
	{
		return;
	}
	while (copy != NULL)
	{
		printf("%d\n", copy->n);
		copy = copy->next;
	}
}
