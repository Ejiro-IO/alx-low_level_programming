#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal
 * @n: the parameter
 * Return: 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
