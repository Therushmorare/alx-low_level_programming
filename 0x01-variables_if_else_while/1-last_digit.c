#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the first function to be executed
 *
 * Return: return 0 just this time
 */

int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rem = n % 10;
	if (rem > 5)
		printf("Last digit of %d is %d and is greater than 5", n, rem);
	else if (rem == 0)
		printf("Last digit of %d is %d and is 0", n, rem);
	else if (rem < 6 && rem != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, rem);
	printf("\n");
	return (0);
}
