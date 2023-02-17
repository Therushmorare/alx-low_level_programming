#include <stdio.h>

/**
 * main - entry level function
 *
 * Return: returning a zero value
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
