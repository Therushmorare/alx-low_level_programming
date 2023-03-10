#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: An array containing the arguments passed
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	int j, num = 0;
	char *arg = argv[i];

	for (j = 0; arg[j] != '\0'; j++)
	{
		if (arg[j] < '0' || arg[j] > '9')
		{
		printf("Error\n");
		return (1);
		}
		num = num * 10 + (arg[j] - '0');
	}
	sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
