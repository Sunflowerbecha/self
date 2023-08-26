#include "main.h"
/**
 * verify_blt - Verify if input is a builtin
 * @args: Pointer to array of arguments
 * @status: Current status
 * Return: -1 if builtin, 0 if not
 */
int verify_blt(char **args, int status)
{
	char *builtins[2] = {
		"exit",
		"env"
	};
	int i = 0;

	while (i < 2)
	{
		if (_strcmp(args[0], builtins[i]) == 0)
			break;
		i++;
	}
	if (i == 2)
		return (-1);
	if (_strcmp(builtins[i], "exit") == 0)
	{
		free(args[0]);
		exit(status);
	}
	if (_strcmp(builtins[i], "env") == 0)
	{
		if (environ == NULL)
			return (0);
		write(1, environ, 1000);
	}
	return (0);
}

