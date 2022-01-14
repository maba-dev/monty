#include "monty.h"
char (*getword(char *line))
{
	int i;
	for (i = 0; line[i];  i++)
	{
		if (line[i] == '\t')
		{
			line[i] = ' ';
		}
		if (line[i] == '#' || line[i] == '\n')
		{
			line[i] = '\0';
		}
	}
	return line;
}
