#include "main.h"
/**
 * last_free - Free memory for execution
 * @input: Input from user
 */
void last_free(char *input)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(input);
	}
	if (!isatty(STDIN_FILENO))
		free(input);
}

