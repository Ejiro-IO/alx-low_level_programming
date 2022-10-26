#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of intergers to be reversed
 * @n: the numbers of element to swap
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
