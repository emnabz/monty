 #include "monty.h"
/**
 * main - tokenizes values from monty files and calling function to execute
 * @argc: number of arguments entered
 * @argv: arguments passed
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char **argv)
{
	FILE *file_to_open;
	int read;
	char *line = NULL;
	size_t len = 0;
	char *token;
	stack_t *stack = NULL;
	char *opcode;
	unsigned int line_number = 0;
	int to_num;


	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_to_open = fopen(argv[1], "r");
	if (!file_to_open)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, file_to_open)) != -1)
	{
		line_number++;
/*		printf("read %d\n", read); */
/*		printf("%s", line); */
		opcode = strtok(line, DELIMITER);
		if (strcmp(opcode, "push") == 0)
		{
			token = strtok(NULL, DELIMITER);
/*			printf("this is token %s\n", token); */
/* converting string containing numbers into integers */
			to_num = atoi(token);
			if (!to_num || to_num < 0)
				printf("L%d: usage: push integer\n", line_number);
			else
				add_node(&stack, line_number, to_num);
		}
		else
			op_func(opcode, &stack, line_number);
	}
	if (!read)
	{
		printf("Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}

	fclose(file_to_open);
	free(line);
	to_free(&stack);
	exit(EXIT_SUCCESS);
}
