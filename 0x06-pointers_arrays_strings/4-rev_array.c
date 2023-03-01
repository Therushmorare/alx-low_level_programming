#include "main.h"
#include <stdio.h>

/**
 *reverse_array  - reverse the values in array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
	tmp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = tmp;
	}
}
