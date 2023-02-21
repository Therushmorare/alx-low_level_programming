#include "main.h"

/**
 *_isalpha - function to check alphabet
 *
 * @c: parameter to be printed
 *
 *Return: 1 or 0 depending on condition
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65  && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
