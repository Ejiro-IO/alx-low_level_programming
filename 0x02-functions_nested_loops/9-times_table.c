#include "main.h"

/**
 * times_table - prints 9 times table, from 0
 * rone = row, cone = column, e = digits of current results
 * Retuen: times table
 * add extra space past single digits
 */
void times_table(void)
{
	int rone, cone, e;

	for (rone = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 0; cone <= 9; cone++)
		{
			e = (rone * cone);
			if ((e / 10) > 0)
			{
				_putchar((e / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((e % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
