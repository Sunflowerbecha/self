#include "main.h"
/**
 * _printp - Prints the prompt in the standar input
 * @prmpt: Pointer to the string to be printed
 * @length: Length ot the prompt
 * Return: 0 if success or -1 if fails
 */
int _printp(const char *prmpt, unsigned int length)
{
	int outpt;

	if (isatty(STDIN_FILENO))
	{
		outpt = write(1, prmpt, length);
		if (outpt == -1)
			return (-1);
	}
		return (0);
}

