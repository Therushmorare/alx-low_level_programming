#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatinates two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: str_arr
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int size;
	char *str_arr;

	size = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	str_arr = malloc((i + j + 1) * sizeof(char));

	if (str_arr == NULL)
		return (NULL);
	while (*s1)
	{
		str_arr[size] = *s1;
		size++;
		s1++;
	}
	while (*s2)
	{
		str_arr[size] = *s2;
		size++;
		s2++;
	}

	str_arr[size] = '\0';

	return (str_arr);
}
