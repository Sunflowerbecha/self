#include "main.h"
/**
 * exec - Creates a child process,executes a command 
 * and wait for update the statusus
 * @args: Array of inputs by user
 * Return: 0 on success
 */
int exec(char **args)
{
	pid_t pid = 0;
	int status = 0, exe_status = 0;

	pid = fork();
	if (pid == -1)
		perror("Error creating process");
	else if (pid == 0)
	{
		exe_status = execve(args[0], args, environ);
		if (exe_status == -1)
		{
			exe_status = 126;
			perror("hsh");
			exit(exe_status);
		} 
		exit(0);
	}
	else 
		wait(&status);
	exe_status = WEXITSTATUS(status);
	return (exe_status);
	}

