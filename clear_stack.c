#include "monty.h"

/**
 * 
 * 
 * 
 */

stack_t clear_stack(stack_t *stack)
{
    stack_t *element;
    if(is_stack_empty(stack))
    {
        return;
    }
    element = stack->next;
    free(stack);
    return clear_stack(element);
}