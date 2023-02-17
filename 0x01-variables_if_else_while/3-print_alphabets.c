#include <stdio.h>

/**
 * main - the first executing function in the program
 *
 * Return: the value of zero will be returned
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
