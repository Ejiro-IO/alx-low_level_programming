#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single dihit numbers using putchar
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');
	return (0);
}
