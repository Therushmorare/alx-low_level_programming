#include "main.h"
#include <stdlib.h>

/**
 *_strdup - copies string print to new string
 *@str: string to be used
 *
 *Return: new str
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (j = 0; j <= *str; j++)
	{
	}
	j += 1;

	new_str = malloc(j * sizeof(char));

	for (i = 0; i < j; i++)
		new_str[i] = str[i];

	return (new_str);
	free (new_str);
}
