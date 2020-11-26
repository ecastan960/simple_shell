#include "shell.h"
/**
 * main - main shell program
 * Return: 0
 */

int main(void)
{
	char *str_check = NULL, **str_env,  **command;
	int i = 0, j = 0, k = 0;

	str_env = _path();
	signal(SIGINT, &handle_C);
	while (1)
	{
		command = _input();
		if (command[0][0] == '/')
			_exec(command[0], command);
		else if (!compar_str(command[0], "exit", 4))
			exit(1);
		else if (!compar_str(command[0], "env", 3))
		{
			while (environ[j] != NULL)
				_print(environ[j]), j++;
		}
		else
		{
			while (str_env[j] != NULL)
			{
				str_check = append_str(str_env[j], command[0]);
				_exec(str_check, command);
				j++;
			}
		}
		for (k = 0; k < i; k++)
			command[k] = '\0';
		k = 0, i = 0, j = 0;
	}
	return (0);
}