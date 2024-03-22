#include "list.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while(h != NULL)
	{
		nodeCount++
		h = h->next;
	}
	return(nodeCount);
}
