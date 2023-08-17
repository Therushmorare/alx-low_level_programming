#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp_node = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp_node);
		return (1);
	}

	while (i < index)
	{
		if (temp_node == NULL)
			return (-1);
		temp_node = temp_node->next;
		i++;
	}

	if (temp_node == NULL)
		return (-1);

	if (temp_node->prev != NULL)
		temp_node->prev->next = temp_node->next;
	if (temp_node->next != NULL)
		temp_node->next->prev = temp_node->prev;

	free(temp_node);

	return (1);
}
