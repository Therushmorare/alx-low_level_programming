#include "main.h"

/**
 *get_bit - get bit then return the index it is located at
 *@n: bit
 *@index: location of bit
 *Return: the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max_len;
	unsigned long int result;

	max_len = (sizeof(unsigned long int) * 8) - 1;

	if (index >= max_len)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}
