#include "monty.h"
void (*monty(char *k))(stack_t **stack, unsigned int line_number)
{
    int i = 0;
    int j;
    instruction_t arr[] = {

        {"push", _push},
    };

    while (arr[i].opcode)
    {
        j = strcmp(arr[i].opcode, k);
        if (j == arr[i].opcode[0])
            return (arr[i].f);
        i++;
    }
    return (0);
}