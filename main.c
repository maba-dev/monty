#include "monty.h"
int main(int argc, char **argv)
{
	FILE *fp = fopen(argv[1], "r");
	size_t len = 255;
	char *line = malloc(sizeof(char) * len);
	if (argc != 2)
		{
			printf("USAGE: monty file"); 
			EXIT_FAILURE;
		}
    if (fp == NULL) 
		{
			printf("can open file input1.txt!");
			return(0);
		}
    while(fgets(line, len, fp) != NULL)
		{
			printf("%s", line);
		}
    free(line);
	printf("\n");
	
	return(0);
}
