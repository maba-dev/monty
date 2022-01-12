#include "monty.h"
global_variables_t var_global;
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("USAGE: monty file"); 
		EXIT_FAILURE;
	}
	fopen(argv[1], "r");
	clear_stack(stack);
	return(0);
}