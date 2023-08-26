#include "main.h"
/**
 * exist - Verify if a file exist
 * @path_name: path to the file
 * Return: 0 if file exist, -1 if not
 */
int exist(char *path_name)
{
	int exist_status;

	exist_status = (open(path_name, O_RDONLY));
	if (exist_status != -1)
	{
		close(exist_status);
		return (0);
	}
	else
		return (-1);
}

