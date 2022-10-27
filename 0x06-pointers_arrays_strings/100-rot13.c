#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 *
 */

char *rot13(char *str)
{
	int count = 0, i1, i2;
	char alphabet[52] = {'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
		'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char rot13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c',
		'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D',
		'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	while (str[i1])
	{
		for (i2 = 0; i2 < 52; i2++)
		{
			if (str[i1] == alphabet[i2])
			{
				str[i1] == rot13[i2];
			}
		}
		i1++;
	}
	return (str);
}
