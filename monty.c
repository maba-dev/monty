#include "monty.h"
/**
 *monty - prototype
 *@k:V
 *Return: 0
 */
void (*monty(char **k, unsigned int line_number))(stack_t **stack)
{
	int i = 0;
	int j;
	instruction_t arr[] = {

		{"pall", pall},
		{NULL, NULL},
	};

	while (arr[i].opcode)
	{
		j = strcmp(arr[i].opcode, k[0]);
		if (j == 0)
			return (arr[i].f);
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, k[0]);
	exit(EXIT_FAILURE);
}
