#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isupper - check if letter is uppercase
 *@c: parameter to be used
 *Return: return 1 if is upper case and 0  if not
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
