#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int number = 48;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar(10);
}
