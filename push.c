#include "monty.h"
/**
 *_push - prototype
 *@stack:V
 *@x:V
 */
 stack_t *_push(stack_t **stack, char *npush, unsigned int line_number)
{
	int x;
	int i = 0;

	if (!npush)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
	}

	while (npush[i])
	{
		printf("ici\n");
		if(npush[i] < '0' || npush[i] > '9')
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	x = atoi(npush);
	*stack = add_dnodeint(stack, x);
	return (*stack);
}
