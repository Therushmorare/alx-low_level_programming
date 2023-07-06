#include "main.h"

/**
 *clear_bit - clear the index to a bit
 *@n: bit value
 *@index: bit location
 *Return: 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_len;

	max_len = (sizeof(unsigned long int) * 8) - 1;

	if (index >= max_len)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
