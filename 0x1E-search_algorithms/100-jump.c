#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index, i, k, last;

	if (array == NULL || size == 0)
		return (-1);

	i = (int)sqrt((double)size);
	k = 0;
	last = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		last = index;
		index = k * i;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", last, index);

	for (; last <= index && last < (int)size; last++)
	{
		printf("Value checked array[%d] = [%d]\n", last, array[last]);
		if (array[last] == value)
			return (last);
	}

	return (-1);
}
