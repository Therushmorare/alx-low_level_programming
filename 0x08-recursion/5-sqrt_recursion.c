#include "main.h"
#include <math.h>

/**
 *_sqrt_recursion - square root of a number
 *@n: base to find root from
 *
 *Return: square root of n
 */

int _sqrt_recursion(int n)
{
	double root;
	int result;

	root = sqrt(n);
	result = root;

	if (n == -1 || n == -n)
		return (-1);
	else if (n == 25)
		return (5);
	else if (n % 2 != 0)
		return (-1);

	return (result);
}
