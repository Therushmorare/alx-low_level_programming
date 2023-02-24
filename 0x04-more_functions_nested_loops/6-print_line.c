#include "main.h"

/**
 *print_line - print dash for line
 *@n: attribute to be used
 *Return: always 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
