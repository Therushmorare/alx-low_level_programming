#include <stdio.h>

/**
 * main - entry level function
 *
 * Return: return zero for now
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
