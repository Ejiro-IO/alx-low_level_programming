#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer, 24 hour clock
 * h = hour, m = minute
 * / 10 allows seconds digit to rotate
 * for loop breaks before 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, m;

	for (h = o; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
