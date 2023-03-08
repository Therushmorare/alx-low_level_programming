#include "main.h"
#include <string.h>

/**
 *_puts_recursion - prints string
 *@s: string to be printed
 *Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
