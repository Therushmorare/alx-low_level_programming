#include <stdio.h>

/**
 * main - main function in the program
 *
 * Return: return a zero value
 */

int main(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
		putchar('0' + j);

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
