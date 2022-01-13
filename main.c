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
	unsigned int line_number = 0;
	char *line_buf = NULL;
	ssize_t line_size = 0;
	size_t line_buf_size = 0;
	char *command;
	int getword_return;

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
	line_size = getline(&line_buf, &line_buf_size, fd);
	while (line_size != -1)
	{
		line_number++;
		if (line_buf[0] != '\n')
		{
			getword_return = getword(line_buf, line_number, &command);
			if (getword_return < 0)
				(errors) getword_return line_number fd line_buf command
			if (command)
				free(command);
		}
		line_size = getline(&line_buf, &line_buf_size, fd);
	}
	free(fd);
	free(line_buf);
	free(command);
	return (0);
}
