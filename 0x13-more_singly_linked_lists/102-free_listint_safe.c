#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list and
 * sets head to NULL.
 *
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n_size = 0;
	int contrast;
	listint_t *node_buff;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		contrast = *h - (*h)->next;
		if (contrast > 0)
		{
			node_buff = (*h)->next;
			free(*h);
			*h = node_buff;
			n_size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			n_size++;
			break;
		}
	}
	*h = NULL;
	return (n_size);
}
