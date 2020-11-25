#include "shell.h"
/**
 * _getenv - gets a pointer
 * @name: variable to search in list of enviroment variables
 * @env: pointer to enviromental variable
 * Return: pointer to specific enviromental variable
 */

char *_getenv(const char *name, char **env)
{
	unsigned int i;
	char *str;
	size_t a;
	size_t b;

	i = 0;
	a = str_size(name);

	while (env[i])
	{
		b = compar_str(name, env[i], a);
		if (b == 0)
		{
			str = env[i] + a;
			return (str);
		}
		i++;
	}
	return (0);
}
