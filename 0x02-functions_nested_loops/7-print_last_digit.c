#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number's last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = (n % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (0);
}
