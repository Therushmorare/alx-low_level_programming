#include "main.h"

/**
 *get_endianness - check for indian's values
 *
 *Return: 1 or 0
 */

int get_endianness(void)
{
	unsigned int val;
	char *bites;

	val = 1;
	bites = (char *)&val;

	if (*bites != 1)
		return (0);

	return (1);
}
