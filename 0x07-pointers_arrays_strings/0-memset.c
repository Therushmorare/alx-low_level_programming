#include "main.h"

/**
 *_memset - memset function
 *@s: vari to be used as return type
 *@b: values s iterations are stored in b
 *@n: int which is the size of the buffer
 *
 *Return: return s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
