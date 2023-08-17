#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp_node = *h;

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (i < idx - 1)
	{
		if (temp_node == NULL)
		{
			free(new);
			return (NULL);
		}
		temp_node = temp_node->next;
		i++;
	}

	if (temp_node == NULL)
	{
		free(new);
		return (NULL);
	}

	new->prev = temp_node;
	new->next = temp_node->next;

	if (temp_node->next != NULL)
		temp_node->next->prev = new;

	temp_node->next = new;

	return (new);
}

