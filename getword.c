#include "monty.h"
int getword()
{
	if (*command)
		{
				if (strcmp(*command, "push") == 0)
				{
					free(*command);
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

