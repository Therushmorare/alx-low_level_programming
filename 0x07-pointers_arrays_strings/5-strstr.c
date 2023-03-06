#include "main.h"

/**
 *_strstr - finding needle in the haystack
 *@haystack: string that is going to be used for finding needle
 *@needle: attribute to be found in haystack
 *Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *val_1 = haystack;
		char *val_2 = needle;

		while (*val_1 == *val_2 && *val_2 != '\0')
		{
			val_1++;
			val_2++;
		}

		if (*val_2 == '\0')
		{
			return (haystack);
		}
	}

	return (NULL);
}
