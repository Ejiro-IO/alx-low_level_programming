#include "main.h"

/**
 * print_most_numbers -  a function that prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * Returb: 0
 */

void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if ((number == 50) || (number == 52))
		{
			continue;
		}
		_putchar(number);
	}
	_putchar(10);
}
