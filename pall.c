#include "monty.h"
void pall(stack_t **stack, unsigned int y)
{
	stack_t *copy = *stack;
	(void)y;
	if (bool_is_empty_stack(*stack))
	{
		return;
	}
	while (!bool_is_empty_stack(*stack))
	{
		printf("%d\n", copy->n);
		copy = copy->next;
	}
}
