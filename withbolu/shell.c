#include "main.h"
/**
 * main - simple shell 
 * Return: 0 if success
 */
int main(void)
{
	ssize_t read = 0;
	size_t line_length = 0;
	char *line = NULL, *args[20];
	int counter = 1, vf_stat = 0, exist_stat = 0, xstatus = 0, blt_stat = 0;

	_printp("$ ", 2);
	read = getline(&line, &line_length, stdin);
	while (read != -1)
	{
		if (*line != '\n')
		{
			fill_args(line, args);
			if (args[0] != NULL)
			{
				exist_stat = exist(args[0]);
				if (exist_stat != 0)
				{
					vf_stat = verify_path(args);
					if (vf_stat == 0)
						xstatus = exec(args), free(line), free(*args);
					else
					{
					blt_stat = verify_blt(args, xstatus);
					if (blt_stat != 0)
						xstatus = print_not_found(args, counter), free(line);
					}
				}
				else
					xstatus = exec(args), free(line);
			}
			else
				free(line);
		}
		else if (*line == '\n')
			free(line);
		line = NULL, counter++;
		_printp("$ ", 2), read = getline(&line, &line_length, stdin);
	}
	last_free(line);
	return (xstatus);
}

