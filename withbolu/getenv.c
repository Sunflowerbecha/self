#include "main.h"
/**
 * _getenv - Get global environment variable
 * @glo_var: Variable to extract
 * Return: Pointer to variable, NULL if fails
 */
char *_getenv(char *glo_var)
{
	int i = 0;
	const char amp[] = "=";
	char *env_token, *env_duplicate, *duplicate_token;

	if (glo_var != NULL)
	{
		if (environ == NULL)
			return (NULL);
		env_duplicate = _strdup(environ[i]);
		while (env_duplicate != NULL)
		{
			env_token = strtok(env_duplicate, amp);
			if (_strcmp(env_token, glo_var) == 0)
			{
				env_token = strtok(NULL, amp);
				duplicate_token = _strdup(env_token);
				free(env_duplicate);
				return (duplicate_token);
			}
			i++;
			free(env_duplicate);
			env_duplicate = _strdup(environ[i]);
		}
	}
	return (NULL);
}

