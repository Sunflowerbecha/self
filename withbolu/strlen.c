#include "main.h"
/**
 * _strlen - Get the length of a string
 * @str: String
 * Return: length of string
 */

int _strlen(const char *str)
{
	int length = 0;

	if (str == NULL)
		return (0);

	while (str[length] != '\0')
		length++;
	return (length);
}

