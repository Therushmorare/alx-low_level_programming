#include "main.h"

/**
 *print_array - print array values
 *@a: pointer to be used
 *@n: var to be used
 *Return: always zero
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i != n - 1)
		printf(", ");
	}

	printf("\n");
}
