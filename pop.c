#include "monty.h"
/**
*pop - prints values from the top of the stack
*@stack: keeps values
*@line_number: counting lines
*Return: nothing
*/
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *to_pop;
to_pop = *stack;
if (to_pop != NULL)
{
to_pop = to_pop->next;
printf("%d\n", to_pop->n);
}
else
{
printf("L%d: can't pop an empty stack", line_number);
exit(EXIT_FAILURE);
}
free(to_pop);
}
