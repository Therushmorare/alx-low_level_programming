#include "main.h"
#include <stdlib.h>

/**
 *create_array - create dynamic array
 *@size: size of array
 *@c: character inputed
 *
 *Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		ar = malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
	}
	else
	{
		return (NULL);
	}

	return (ar);
	free(ar);
}
