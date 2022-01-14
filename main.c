#include "monty.h"
/**
 *main - main function
 *@argc: V
 *@argv: V
 *Return:int
 */
int main(int argc, char **argv)
{
	FILE *fd;
	char *line_clean;
	char line_buf[1024];
	int size = 1024;
	char **line_tok;
	unsigned int line_number = 0;
	stack_t *stack;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line_buf, size, fd)!=NULL)
	{
		line_number++;
		line_clean = getword(line_buf);
		line_tok = strtow(line_clean);
		if (strcmp(line_tok[0], "push") == 0)
		{
			_push(&stack, line_tok[1], line_number);
		}
		else
			monty(line_tok, line_number);
	}
	free(fd);
	return (0);
}
