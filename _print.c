#include "shell.h"
/**
 * _print - prints a string
 * @strp: string to print on terminal
 */

void _print(char *strp)
{
	int i, n = 0;

	n = str_size(strp);
	for (i = 0; i < n; i++)
		write(1, &strp[i], 1);
	write(1, "\n", 1);
}
