#include "main.h"

/**
 *flip_bits - function that checks num of times a bit can be flipped
 *@n: bit 1
 *@m: bit 2
 *
 *Return: num of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int rslt;
	unsigned int num_flips;
	unsigned long int max_len;

	rslt = n ^ m;
	num_flips = 0;
	max_len = (sizeof(unsigned long int) * 8) - 1;

	if (n < 1 || m < 1)
		return (-1);
	for (i = 0; i < max_len; i++)
	{
		if (rslt != 0)
		{
			num_flips += (rslt & 1);
			rslt >>=1;
		}
	}	

	return (num_flips);
}
