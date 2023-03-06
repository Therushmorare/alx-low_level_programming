#include "main.h"
#include <string.h>

/**
 *_strspn - size of sub string
 *@s: string
 *@accept: sub string
 *Return: size of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int sizeVal;
	unsigned int val;

	sizeVal = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		val = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				sizeVal++;
				val = 1;
			}
		}

		if (val == 0)
		{
			return (sizeVal);
		}
	}
	return (sizeVal);


}
