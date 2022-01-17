#include "monty.h"
/**
 *pint - If the stack is empty, print the error message
 *
 *@stack: V
 *@line_number: V
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
}
