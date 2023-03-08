#include "main.h"
#include <string.h>

/**
 *is_palindrome - print palindrome
 *@s: string to be checked
 *
 *Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i;
	int j;

	i = 0;
	j = strlen(s) - 1;

	while (j > i)
	{
		if (s[i++] != s[j--])
			return (0);
	}

	return (1);
}
