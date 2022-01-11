#include "monty.h"
stack_t _push(stack_t *Stack, int x)
{
    stack_t *element;
    element = malloc(sizeof(*element));
    if (element == NULL)
    {
        exit (EXIT_FAILURE);
    }
    element->n = x;
    element->next = Stack;
    return *element;
}