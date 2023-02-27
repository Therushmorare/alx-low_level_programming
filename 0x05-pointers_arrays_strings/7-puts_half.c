#include "main.h"
#include <string.h>

/**
 *puts_half - prints half of the intial number list
 *@str: var to be used
 *
 *Return: always zero
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;
	int i;

	if (len % 2 == 1)
	{
		start += 1;
	}

	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
