#include "monty.h"
/**
*to_free - frees the stack
*@stack: the stack to be freed
*Return: nothing
*/
void to_free(stack_t **stack)
{
stack_t *temp;
while (*stack != NULL)
{
temp = *stack;
*stack = (*stack)->next;
free(temp);
}
}
