#include "shell.h"
/**
 * str_size - Obtains the size of the string
 * @str1: Input string
 * Return: Number of characters of the string
 */

size_t str_size(const char *str1)
{
	size_t n = 0;

	while (str1[n] != 0)
		n++;
	return (n);
}
