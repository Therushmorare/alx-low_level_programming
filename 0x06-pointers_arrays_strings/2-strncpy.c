#include "main.h"
#include <string.h>

/**
 *_strncpy -  function that copies two strings
 *@dest: pointer that src will be copied to
 *@src: pointer that will be used to transfere data to dest
 *@n: size of string
 *Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
