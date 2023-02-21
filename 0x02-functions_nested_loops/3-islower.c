#include "main.h"

/**
 *_islower - function to check lowercase
 *
 * @c: parameter to be printed
 *
 *Return: 1 or 0 depending on condition
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
