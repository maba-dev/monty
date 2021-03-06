#ifndef Stacks_Queues_LIFO_FIFO
#define Stacks_Queues_LIFO_FIFO

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
stack_t *stack;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack);
} instruction_t;

char **array_command;
char **strtow(char *str);

stack_t *_push(stack_t **stack, char *npush, unsigned int line_number);
void (*monty(char **k, unsigned int line_number))(stack_t **stack);
void clear_stack(stack_t *stack);
void pall(stack_t **stack);
void pint(stack_t **stack, unsigned int line_number);
char (*getword(char *line));
stack_t	*add_dnodeint(stack_t **head, const int n);

#endif /* Stacks_Queues_LIFO_FIFO */
