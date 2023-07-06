#include "main.h"

/**
 *binary_to_uint - function that converts binary to unsigned int
 *@b: string of binary values
 *Return: unsigned int value
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int final_val;

	final_val = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0';  i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			final_val = final_val * 2 + (b[i] - '0');
		}
		else
		{
			if (b[i] != '0' || b[i] != '1')
				return (0);

			final_val = 0;
			break;
		}
	}

	return (final_val);
}
