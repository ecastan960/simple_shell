#include "shell.h"
/**
 * _exec - gets a pointer
 * @com: command to execute
 * @command: arguments of the command to execute
 */

void _exec(char *com, char **command)
{
	int id, status;
	struct stat st;

	if (stat(com, &st) == 0)
	{
		id = fork();
		if (id == 0)
		{
			if (execve(com, command, NULL) == -1)
				perror("Error:");
			fflush(stdout);
		}
		wait(&status);
		fflush(stdout);
	}
}
