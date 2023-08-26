#include "main.h"
/**
 * print_not_found - write error message
 * @args: array of args by user
 * @counter: Times executed
 * Return: Exit status
 */
int print_not_found(char **args, int counter)
{
	char *imode_shell_name = "hsh";
	char *non_i_mode_shell_name = "./hsh";

	if (isatty(STDIN_FILENO))
		write(2, imode_shell_name, 3);
	else
	{
		write(2, non_i_mode_shell_name, 5);
	}
	write(2, ": ", 2);
	print_numbers(counter);
	write(2, ": ", 2);
	write(2, args[0], _strlen(args[0]));
	write(2, ": not found\n", 12);
	return (127);
}

