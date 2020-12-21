#include "monty.h"
/**
*pall - prints all numbers from stack
*@stack: keeping values
*@line_number: counting lines, here unused
*Return: nothing
*/
void pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
stack_t *to_print;
to_print = *stack;
while (to_print != NULL)
{
printf("%d\n", to_print->n);
to_print = to_print->next;
}
}
