#include "main.h"
#include <stdio.h>

/**
 *puts2 - print 2468
 *@str: variable to be used
 *Return: always zero
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
