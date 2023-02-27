#include "main.h"

/**
 *_puts - prints string value
 *@str: string used as attribute
 *
 *Return: return the string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
