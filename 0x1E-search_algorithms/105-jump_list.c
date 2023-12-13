#include <stdio.h>
#include <math.h>
#include "search_algos.h"

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where the value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value) {
    if (list == NULL || size == 0)
        return NULL;

    size_t jump = (size_t)sqrt(size);
    listint_t *current = list;
    listint_t *prev = NULL;

    printf("Value checked at index [%lu] = [%d]\n", current->n, current->n);

    while (current->next != NULL && current->n < value) {
        prev = current;
        for (size_t i = 0; i < jump && current->next != NULL; i++) {
            current = current->next;
        }
        printf("Value checked at index [%lu] = [%d]\n", current->n, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->n, current->n);

    while (prev != NULL && prev->n <= current->n) {
        printf("Value checked at index [%lu] = [%d]\n", prev->n, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }

    return NULL;
}
