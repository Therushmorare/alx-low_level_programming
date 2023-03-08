#include "main.h"

/**
 *_print_rev_recursion - print string in reverse
 *@s: string to be printed
 *
 *Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
	{
		return;
	}

	_putchar(*s);
}
