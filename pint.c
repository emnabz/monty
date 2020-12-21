#include "monty.h"
/**
 * pint - prints values from the top of the stack
 * @stack: keeps values
 * @line_number: counting lines
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *print_top;

	print_top = *stack;

	if (print_top != NULL && *stack != NULL)
	{
		printf("%d\n", print_top->n);
	}
	else
	{
		printf("L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
}
}
