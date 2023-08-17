#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add = malloc(sizeof(dlistint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->prev = NULL;
	add->next = *head;

	if (*head != NULL)
		(*head)->prev = add;

	*head = add;

	return (add);
}
