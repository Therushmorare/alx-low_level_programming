#include "main.h"

/**
 * print_last_digit - function that prints last digit of number
 * @i: parameter to be used
 * Return: the last digit of number
 */

int print_last_digit(int i)
{
	int v;

	v = i % 10;
	if (i < 0)
		v = -v;
	return (v);
}
