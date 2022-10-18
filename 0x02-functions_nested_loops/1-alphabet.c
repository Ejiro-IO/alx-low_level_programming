#include <stdio.h>
/**
 * main - check the code
 * Description: print alphabet in lowercase, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
