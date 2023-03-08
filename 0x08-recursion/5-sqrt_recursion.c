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
	int i;
	int result;

	i = 1;
	result = 1;

	if (n < 0)
		return -1;

	if (n == 0 || n == 1)
		return n;

	while (result <= n)
	{
	i++;
	result = i * i;
	}
	return (result == n) ? i : _sqrt_recursion(n - 1);
}
