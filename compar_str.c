#include "shell.h"
/**
 * compar_str - Compares if two strings are equal
 * @str1: Input string 1
 * @str2: Input string 2
 * @size: size of string
 * Return: Number of characters of the string
 */

int compar_str(const char *str1, const char *str2, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (str1[i] != str2[i])
			return (1);
	}
	return (0);
}
