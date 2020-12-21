#include "monty.h"
/**
 * op_func - structure of instructions passed from monty files
 * @opcode: tokenized opcode passed from monty file
 * @stack: storing values
 * @line_number: counting lines in monty
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int op_func(char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t op_codes[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};

	unsigned int i = 0;
/* check if instructions from the file matches any in structure */
	while (op_codes[i].opcode)
	{
		if (strcmp(opcode, op_codes[i].opcode) == 0)
		{
			(op_codes[i].f)(stack, line_number);
			 return(EXIT_SUCCESS);
		}
		i++;
	}
/* if no matches */
	printf("L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
