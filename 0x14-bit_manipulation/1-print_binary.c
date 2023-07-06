#include "main.h"

/**
 *print_binary - converts number to binary
 *@n: number to be converted
 *
 *Return: the binary value
 */

void print_binary(unsigned long int n)
{
	if (n < 1)
		return;
	else
	{
		if (n > 1)
			print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
