#include "shell.h"
/**
 * _input - prints a string
 * Return: Number of characters of the string
 */

char **_input(void)
{
	char *buffer = NULL, **command;
	int i = 0, chars;
	size_t bufsize = 32;

	command = (char **)malloc(bufsize * sizeof(char));
	prompt();
	chars = getline(&buffer, &bufsize, stdin);
	if (chars == -1)
		exit(1);
	buffer[chars - 1] = '\0';
	buffer = strtok(buffer, " ");
	while (buffer != NULL)
	{
		command[i] = buffer;
		i++;
		buffer = strtok(NULL, " ");
	}
	return (command);
}
