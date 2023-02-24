#include "main.h"
#include <ctype.h>

/**
 *_isdigit - checks if number is a digit
 *@c: attribute used
 *Return: return 1 if its a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
