#include "monty.h"
/**
*swap - swaps the top two elements of the stack
*@stack: keeps values
*@line_number: counting lines
*Return: nothing
*/
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *to_swap;
int to_swap_1;
int to_swap_2;
unsigned int number_elements = 0;
to_swap = *stack;
while (to_swap != NULL)
{
number_elements++;
to_swap = to_swap->next;
}
to_swap = *stack;
if (number_elements > 1 && stack != NULL)
{
to_swap_1 = to_swap->n;
to_swap_2 = to_swap->next->n;
to_swap->n = to_swap_2;
to_swap->next->n = to_swap_1;
}
else
{
printf("L%d: can't swap, stack too short", line_number);
exit(EXIT_FAILURE);
}
}
