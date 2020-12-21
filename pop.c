#include "monty.h"

/**
 * _pop - execution of pop opcode that removes the top element of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: instruction line number
 *
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		free_and_exit(stack);
	}
	if (!(*stack)->next)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		*stack = (*stack)->next;
		free((*stack)->prev);
		(*stack)->prev = NULL;
	}
}
