#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list
 *
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting from 0
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	Uint n_count = 0;

	while (head != NULL && n_count < index)
	{
		head = head->next;
		n_count++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}

