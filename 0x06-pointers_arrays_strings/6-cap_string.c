#include "main.h"
#define MAX 100

/**
 * cap_string - function that capitalizes all words of a string
 * @s: the string to be capitalized
 *
 * Return: a pointer to the changed string
 */

char *cap_string(char *s)
{
	char str[MAX] = {0};
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		index++;

		if (index == 0)
		{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		continue;
		}
		if (str[index] == ' ')
		{
			++index;

			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 32;
				continue;
			}
		}
		else
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
				str[index] = str[index] + 32;
		}
	}
	return (s);
}
