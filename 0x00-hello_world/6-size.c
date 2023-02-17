#include <stdio.h>

/**
 * main - main function to execute the main code
 *
 * Return: 0 is the value to be returned by main function
 */

int main(void)
{
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
    printf("Size of float: %zu byte(s)\n", sizeof(float));

    return (0);
}
