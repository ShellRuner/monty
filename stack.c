#include "monty.h"

/**
 * creatNode - A functiion that creates new node
 * @n: element of the node
 *
 * Return: A pointer to a new node
 */
stack_t *creatNode(int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	//errror handle for malloc
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;
}

/**
 * is_empty - A function that cheack if stack is empty
 * @stack: Element that allow to access the stack
 *
 * Return: 1 for true and 0(false)
 */
int is_empty(STACK stack)
{
	if (STACK.top == NULL)
		return (1);
	else
		return (0);
}

/**
 * push - A function that pushes an element to the stack
 * @data: the element to be pushes to the stack
 *
 * Return: Nothing
 */
void push(STACK stack, const int data)
{
	stack_t *new_node = creadNode(data);

	//if the stack is empty
	if (is_empty(stack))
	{
		stack.top = new_node;
	}
	else//if the stack is not empty
	{
		new_node->next = stack.top;
		stack.top->prev = new_node;
		stack.top = new_node;
	}
}

/**
 * pall - A function that prints all the values on the stack
 * @satck: Element that allows to access the stack
 *
 * Return: Nothing
 */
void pall(SATACK stack)
{
	stack_t *curr = satck.top;

	if (is_empty(stack))
		printf();
	else
	{
		while (curr != NULL)
		{
			printf("%d\n", curr->n);
			curr = curr->next;
		}
	}
}
