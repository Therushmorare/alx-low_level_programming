#include "main.h"
#include <string.h>

/**
 *_strlen_recursion - checks for length of a string
 *@s: string to be checked for length
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (strlen(s));
}
