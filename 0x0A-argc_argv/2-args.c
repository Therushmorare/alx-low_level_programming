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

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	else
	{
		printf("The command had no other arguments.\n");
	}

	return (0);
}
