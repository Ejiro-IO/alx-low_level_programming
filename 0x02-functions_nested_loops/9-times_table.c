#include "main.h"

/**
 * times_table - prints 9 times table, from 0
 * r = row, c = column, e = digits of current results
 * Retuen: times table
 * add extra space past single digits
 */
void times_table(void)
{
	int r, c, e;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');

		for (c = 1; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');

			e = (r * c);

			if (e <= 9)
				_putchar(' ');
			else
				_putchar((e / 10) + '0');
			_putchar((e % 10) * '0');
		}
		_putchar('\n');
	}
}
