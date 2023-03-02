#include "main.h"

/**
 *rot13 - function that swaps by 13 or rotates by 13
 *@str: var to be used
 *
 *Return: return string
 */

char *rot13(char *str)
{
	char *temp = str;
	int i;
	char alg[][2] = {{'a', 'n'}, {'b', 'o'}, {'c', 'p'}, {'d', 'q'},
			{'e', 'r'}, {'f', 's'}, {'g', 't'}, {'h', 'u'},
			{'i', 'v'}, {'j', 'w'}, {'k', 'x'}, {'l', 'y'},
			{'m', 'z'}, {'n', 'a'}, {'o', 'b'}, {'p', 'c'},
			{'q', 'd'}, {'r', 'e'}, {'s', 'f'}, {'t', 'g'},
			{'u', 'h'}, {'v', 'i'}, {'w', 'j'}, {'x', 'k'},
			{'y', 'l'}, {'z', 'm'}, {'A', 'N'}, {'B', 'O'},
			{'C', 'P'}, {'D', 'Q'}, {'E', 'R'}, {'F', 'S'},
			{'G', 'T'}, {'H', 'U'}, {'I', 'V'}, {'J', 'W'},
			{'K', 'X'}, {'L', 'Y'}, {'M', 'Z'}, {'N', 'A'},
			{'O', 'B'}, {'P', 'C'}, {'Q', 'D'}, {'R', 'E'},
			{'S', 'F'}, {'T', 'G'}, {'U', 'H'}, {'V', 'I'},
			{'W', 'J'}, {'X', 'K'}, {'Y', 'L'}, {'Z', 'M'}};

	while (*temp)
	{
		i = 0;

		while (i < 52 && *temp != alg[i][0])
		{
			i++;
		}
		if (i < 52)
		{
			*temp = alg[i][1];
		}
	temp++;
	}

	return (str);
}
