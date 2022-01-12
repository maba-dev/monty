#include "monty.h"
void _push(stack_t **stack,unsigned int x)
{
    stack_t *element;
    element = malloc(sizeof(*element));
    if (element == NULL)
    {
        exit (EXIT_FAILURE);
    }
    element->n = x;
    element->next = *stack;
}
