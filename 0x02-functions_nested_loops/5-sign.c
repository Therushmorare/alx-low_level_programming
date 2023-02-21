#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints sign
 * @n: value or attribute to be used
 * Return: 0 or negative 1 depending on condition
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
