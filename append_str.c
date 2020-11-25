#include "shell.h"
/**
 * append_str - Compares if two strings are equal
 * @str1: Input string 1
 * @str2: Input string 2
 * Return: Number of characters of the string
 */

char *append_str(const char *str1, const char *str2)
{
	char *strA;
	size_t i = 0, j = 0;
	size_t size1 = 0;
	size_t size2 = 0;

	size1 = str_size(str1);
	size2 = str_size(str2);

	strA = (char *)malloc((size1 + size2) * sizeof(char));
	for (i = 0;i < (size2 + size1 + 1); i++)
	{
		if (i < size1)
			strA[i] = str1[i];
		if (i == size1)
			strA[i] = '/';
		if (i > size1)
		{
			strA[i] = str2[j];
			j++;
		}
	}
	return (strA);
}