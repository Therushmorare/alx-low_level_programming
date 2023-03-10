#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num_coins;
	int amount_val;
	int i;
	int coins_arr[] = {25, 10, 5, 2, 1};

	num_coins = 0;
	amount_val = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (amount_val < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && amount_val > 0; i++)
	{
		num_coins += amount_val / coins_arr[i];
		amount_val %= coins_arr[i];
	}

	printf("%d\n", num_coins);

	return (0);

}

