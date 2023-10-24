#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t elem_count = 0;

	for (; h != NULL; h = h->next) {
		elem_count++;
	}
	return (elem_count);
}
