#ifndef Stacks_Queues_LIFO_FIFO
#define Stacks_Queues_LIFO_FIFO

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include <complex.h>
#include <ctype.h>
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <tgmath.h>
#include <threads.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>


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
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct global_variables_s
{
    char *number;
    FILE *fd;
    char *buffer;
} global_variables_t;

#define true 1
#define false 0

void _push(stack_t **stack,unsigned int x);
bool bool_is_empty_stack(stack_t **stack);
void (*monty(char *k))(stack_t **stack, unsigned int line_number);
void new_stack(void);
void clear_stack(stack_t *stack);
void pall(stack_t **stack, unsigned int y);


#endif /* Stacks_Queues_LIFO_FIFO */
