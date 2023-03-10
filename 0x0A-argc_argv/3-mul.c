#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: counter
 *@argv: vector array
 *
 *Return: result
 */

int main(int argc, char **argv)
{
	int i;
	int k;
	int result;

	if (argc)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}

		i = atoi(argv[1]);
		k = atoi(argv[2]);

		result = i * k;
		printf("%d\n", result);
	}
	return (result);
}
