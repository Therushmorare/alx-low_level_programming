#include "main.h"

/**
 *factorial - calculates factorial of a number
 *@n: inputed bumber to calc factorial from
 *
 *Return: n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
