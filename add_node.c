#include "monty.h"
/**
*add_node - adding new values from monty when encounters push instruction
*@head: pointer to the list of values
*@n: values accessing from tokenized line
*@line: counting lines
*Return: nothing
*/
void add_node(stack_t **head, __attribute__ ((unused))unsigned int line, int n)
{
stack_t *new_node = NULL;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error: malloc failed\n");
exit(EXIT_FAILURE);
}
if (head != NULL)
{
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
new_node->next = *head;
*head = new_node;
}
}
