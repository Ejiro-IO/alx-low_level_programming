#include "main.h"

/**
 * _memset -  function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: Pointer to the memory area to be filled
 * @b: the character the memory area to be filled with
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
