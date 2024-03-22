#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *temp_node;
	Uint node_count = 0;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = NULL;
	if (idx == 0)
	{
		n_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = n_node;
		}
		*h = n_node;
		return (n_node);
	}
	temp_node = *h;
	while (temp_node != NULL && node_count < idx - 1)
	{
		temp_node = temp_node->next;
		node_count++;
	}
	if (temp_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = temp_node->next;
	if (temp_node->next != NULL)
		temp_node->next->prev = n_node;
	temp_node->next = n_node;
	n_node->prev = temp_node;

	return (n_node);
}
