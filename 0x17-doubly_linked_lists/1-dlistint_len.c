#include "list.h"

/**
 * print_dlistint - A function that prints all element in a list
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of node.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++
	}
	return(nodeCount);
}
