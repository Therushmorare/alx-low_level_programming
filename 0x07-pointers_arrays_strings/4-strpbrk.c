#include "main.h"

/**
 *_strpbrk - searches for any set of bytes in a string
 *@s: string
 *@accept: sub string used
 *Return: value or null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
