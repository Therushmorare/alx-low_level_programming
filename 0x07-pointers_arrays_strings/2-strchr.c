#include "main.h"

/**
 *_strchr - find a char in a string
 *@s: string to be used
 *@c: character to be found
 *Return: null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);

}
