#include "main.h"
#include <stdio.h>

/**
 *leet - function that encrypts letters in a string
 *@str: string to be used
 *
 *Return: string(str)
 */

char *leet(char *str)
{
	char *temp = str;
	int i;

	char leet_arr[][3] = { {'a', '4'}, {'A', '4'}, {'e', '3'}, {'E', '3'},
				{'o', '0'}, {'O', '0'}, {'t', '7'}, {'T', '7'},
				{'l', '1'}, {'L', '1'} };


	while (*temp)
	{
	i = 0;
	while (i < 10 && *temp != leet_arr[i][0])
	{
		i++;
	}
	if (i < 10)
	{
		*temp = leet_arr[i][1];
	}
		temp++;
	}

	return (str);
}

