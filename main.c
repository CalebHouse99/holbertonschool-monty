#include "monty.h"
/**
 * main - program that opens and executes a monty file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *opcode = NULL;
	char *line = NULL;
	unsigned int line_num = 1;
	size_t size = 0;
	stack_t *stack;
	FILE *fd;

	stack = NULL;

	if (argc != 2)
		usage_error();

	fd = fopen(argv[1], "r");
	if (!fd)
		open_error(argv[1]);

	while ((getline(&line, &size, fd)) != (-1))
	{
		if (*line == '\n')
		{
			line_num++;
			continue;
		}
		opcode = strtok(line, " \t\n");
		if (!opcode)
		{
			line_num++;
			continue;
		}
		Arg.argument = strtok(NULL, " \t\n");
		get_opcode(opcode, &stack, line_num);
		line_num++;
	}
	free(line);
	free_stack(&stack);
	fclose(fd);
	exit(EXIT_SUCCESS);
}
