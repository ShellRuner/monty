#ifndef MONTY
#define MONTY
#include <stdio.h>
#include <stdlib.h>

#define LENGTH_MAX_LINE 100

/**
 */
typedef struct STACK
{
	stack_t *top;
} STACK;

/**
 * struct stack_s - doubly linked list representation of a stack
 *                  (or queue)
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

/**
 * struct intruction-s - opcode and its function
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


#endif /* MONTY */
