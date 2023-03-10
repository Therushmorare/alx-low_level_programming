#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function of the program
 *@argc: arg counter
 *@argv: arg vector array
 *Return: zero
 */

int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
