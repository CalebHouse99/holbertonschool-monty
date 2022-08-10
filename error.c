#include "monty.h"

/**
 * open_error - if the file can't be opened.
 * @f: file
 *
 * Return: nothing.
 */
void open_error(char *f)
{
	fprintf(stderr, "Error: Can't open file $s\n", f);
	exit(EXIT_FAILURE);
}
/**
 * usage_error - if file doesnt exist or more than one argumnet.
 *
 * Return: nothing.
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
