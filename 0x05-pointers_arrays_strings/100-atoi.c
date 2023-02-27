#include "main.h"

/**
 *_atoi - function to be used
 *@s: pointer var
 *
 *Return: sign plus result
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
	{
		sign = -sign;
	}
	else if (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
	}
	else if (result > 0)
	{
		break;
	}

	i++;
	}

	return sign * result;
}

