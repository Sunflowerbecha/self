#include "main.h"
/**
 * fill_args - Fill an array with input typed by user
 * @input: String with the input
 * @args: Array to filled
 * Return: Length of the array
 */

int fill_args(char *input, char **args)
{
	int i = 0;
	char *tems, *aux = input, *cmd;

	cmd = strtok(input, "\n\t\r ");
	args[i] = cmd;
	while (aux != NULL)
	{
		++i;
		tems = strtok(NULL, "\n\t\r ");
		aux = tems;
		args[i] = tems;
	}
	args[i] = NULL;
	return (i);
}

