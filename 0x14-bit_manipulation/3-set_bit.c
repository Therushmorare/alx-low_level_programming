#include "main.h"

/**
 *set_bit - set value of bit to 1 in given index
 *@n: bit value
 *@index: location of bit
 *
 *Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_len;

	max_len = (sizeof(unsigned int long) * 8) - 1;

	if (index >= max_len)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
