#include "main.h"
#include <stdio.h>

/**
 *times_table - calculaate 9 times tables
 *
 *Return: always zero
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d, ", i * j);
		}
		printf("%d\n", i * 9);
	}
}
