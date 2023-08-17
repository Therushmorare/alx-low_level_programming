#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int val = 0;

	while (head != NULL)
	{
		val += head->n;
		head = head->next;
	}

	return (val);
}
