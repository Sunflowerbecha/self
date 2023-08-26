#include "main.h"
/**
 * _strcmp - Compares two strings
 * @str1: String to compared
 * @str2: String to compared
 * Return: 0 if same, > 0 if str1 greater, < 0 if str2 greater
 */
int _strcmp(char *str1, char *str2)
{
	int a;

	for (a = 0; str1[a] != '\0'; a++)
		;
	for (a = 0; str2[a] != '\0'; a++)
	{
		if (str1[a] != str2[a])
		{
			return (str1[a] - str2[a]);
		}
	}
	return (0);
}

