#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: number input by user
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
