#include "main.h"
#include <ctype.h>

/**
 *string_toupper - transforms lowercase letters to upper case
 *@str: string to be used
 *
 *Return: always 0
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}

	return (str);
}
