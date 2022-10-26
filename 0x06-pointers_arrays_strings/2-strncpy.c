#include "main.h"

/**
 * _strncpy - a function that copies an imputted number
 * of bytes from src to dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the maximum number of bytes to copy from str
 *
 * Return: a pointer to the resulting strin dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
