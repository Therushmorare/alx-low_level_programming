#include "main.h"

/**
 *rev_string - reverse string
 *@s: string to be use
 *
 *Return: always return zero
 */

void rev_string(char *s)
{
	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
