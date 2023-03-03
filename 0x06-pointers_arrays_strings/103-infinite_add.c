#include "main.h"
#include <stdlib.h>

/**
 *infinite_add - add numbers till infinity
 *@n1: var 1
 *@n2: var 2
 *@r: holder of n1 + n2
 *@size_r: the size of buffer
 *Return: size_r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int  j;
	int k;
	int carry;
	int  sum;
	char *res;

	i = j = carry = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > size_r || j > size_r)
		return (NULL);
	res = r;
	r[size_r - 1] = '\0';
	i--, j--, k = size_r - 2;
	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		carry = sum / 10;
		r[k--] = sum % 10 + '0';
	}
	if (carry)
	{
		if (size_r == 1)
			return (NULL);
		r[k--] = carry + '0';
	}
	if (k == -2)
		return (NULL);
	return (res + k + 1);
}
