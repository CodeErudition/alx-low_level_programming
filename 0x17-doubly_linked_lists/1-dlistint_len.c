#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
