#include "monty.h"
bool bool_is_empty_stack(stack_t **stack)
{
    if (*stack == NULL)
    {
        return(true);
    }
    return(false);
}