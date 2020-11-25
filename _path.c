#include "shell.h"
/**
 * _path - Obtain
 * Return: double pointer containt PATH folders.
 */

char **_path(void)
{
	int i = 0;
	char *var, *str_env, **a_env;

	str_env = (char *)malloc(32 * sizeof(char));
	a_env = (char **)malloc(32 * sizeof(char *));
	var = _getenv("PATH=", environ);
	str_env = strtok(var, ":");
	while (str_env != NULL)
	{
		a_env[i] = str_env;
		i++;
		str_env = strtok(NULL, ":");
	}
	a_env[i] = NULL;
	return (a_env);
}
