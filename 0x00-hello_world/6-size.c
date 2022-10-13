#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", 1);
	printf("Size of an int: %i byte(s)\n", 4);
	printf("Size of a long int: %i byte(s)\n", 4);
	printf("Size of a long long int: %i byte(s)\n", 8);
	printf("Size of a float: %i byte(s)\n", 4);

	printf("Size of a char: %i byte(s)\n", 1);
	printf("Size of an int: %i byte(s)\n", 4);
	printf("Size of a long int: %i byte(s)\n", 8);
	printf("Size of a long long int: %i byte(s)\n", 8);
	printf("Size of a float: %i byte(s)\n", 4);
	return (0);
}
