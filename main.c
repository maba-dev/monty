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
	char *line_buf;

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
	else
		line_buf = strtow(argv[1]);
		getword(line_buf);

	free(fd);
	return (0);
}
