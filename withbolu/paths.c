#include "main.h"
/**
 * verify_path - Verify if first command is executable
 * @args: Array of input
 * Return: 0 at success, -1 at failure
 */
int verify_path(char **args)
{
	char *global_duplicate = NULL;
	char *cmd_path = NULL;
	char *glbl_path = NULL;
	char *dir_path = NULL;
	char *test[121];
	int status = -1, i = 0;

	glbl_path = _getenv("PATH");
	if (glbl_path == NULL)
		return (-1);
	global_duplicate = (_strdup(glbl_path));
	dir_path = strtok(global_duplicate, ":");
	if (dir_path == NULL)
		return (-1);
	free(glbl_path);
	while (status == -1 && dir_path != NULL)
	{
		cmd_path = append_command(dir_path, args[0]);
		test[i] = cmd_path;
		status = exist(test[i]);
		dir_path = strtok(NULL, ":");
		i++;
	}
	i--;
	free(global_duplicate);
	free_grid(test, i);
	if (status == 0)
	{
		args[0] = test[i];
		return (0);
	}
	else
	{
		free(test[i]);
		return (-1);
	}
}

