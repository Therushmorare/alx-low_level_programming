#include "main.h"

/**
 *_memcpy - copy memory to another var
 *@dest: the destination where memory is to be copied to
 *@src: source of the copied memory
 *@n: the size of the buffer
 *Return: the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
