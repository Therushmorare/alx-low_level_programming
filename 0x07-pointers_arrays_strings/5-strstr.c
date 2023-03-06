#include "main.h"

/**
 *_strstr - finding needle in the haystack
 *@haystack: string that is going to be used for finding needle
 *@needle: attribute to be found in haystack
 *Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j] && needle[j] != '\0')
				return (needle);
		}
	}

	return (NULL);
}
