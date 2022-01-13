#include "monty.h"
int getword(char *line, int line_number, char **command)
{
	int i, number;

	for (i = 0; line[i]; i++)
	{
		if (line[i] == ' ' || line[i] == 9)
			continue;

		else if (line[i] != ' ')
		{
			*command = monty(line, i);
			while (line[i] != ' ' && line[i] != 9 && line[i])
				i++;

			if (*command)
			{
				if (strcmp(*command, "push") == 0)
				{
					free(*command);
					while (line[i] == ' ' && line[i] != 9 && line[i])
                    {
                        i++;
                    }
					number = monty(line, i);
					if (number == -123456)
                    {
                        return (-1);
                    }
					stack = _push(&stack, line_number, number);
					return (0);
				}
				else
					return (monty(*command, line_number)(&stack));
			}
		}
	}
	return (0);
}
