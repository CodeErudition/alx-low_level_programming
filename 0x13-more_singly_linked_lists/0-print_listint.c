#include "lists.h"

/**
 * print_listint - A function that prints all the elements
 * of a listint_t list.
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_indx  = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		node_indx++;
	}
	return (node_indx);
}
