#include "main.h"
/**
 * append_command - Concatenates an input with paths in global variable PATH
 * @dir_path: directory string to be append with the command
 * @command: command to be concatenated with the directory
 * Return: Buffer to concatenated path
 */
char *append_command(char *dir_path, char *cmd)
{
	int a, b = 0, ln1, ln2;
	char *cmd_path = NULL;

	if (dir_path == NULL || cmd == NULL)
		return (NULL);

	ln1 = _strlen(dir_path);
	ln2 = _strlen(cmd);
	cmd_path = malloc(ln1 + ln2 + 2);
	if (cmd_path == NULL)
		return (NULL);
	for (a = 0; dir_path[a] != '\0'; a++)
	{
		cmd_path[a] = dir_path[a];
	}
	if (dir_path[a - 1] != '/')
	{
		cmd_path[a] = '/';
		a++;
	}
	while (cmd[b] != '\0')
	{
		cmd_path[a + b] = cmd[b];
		b++;
	}
	cmd_path[a + b] = '\0';
	return (cmd_path);
}
