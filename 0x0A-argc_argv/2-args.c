#include <stdio.h>

/**
 *main - the main function
 *@argc: arg counter
 *@argv: arg array vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
