#include <stdio.h>
#include <stdlib.h>

/**
 *main - the main function
 *@argc: arg counter
 *@argv: arg array of vector
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
