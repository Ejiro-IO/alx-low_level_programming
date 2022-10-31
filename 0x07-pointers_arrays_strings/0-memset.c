#include "main.h"

/**
 * _memset -  function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: Pointer to the memory area to be filled
 * @b: char copy
 * @n: the number of times to copy @b
 *
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
