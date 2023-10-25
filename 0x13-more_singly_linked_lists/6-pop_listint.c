#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * list and returns the data.
 *
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int n_data = 0;
	listint_t *node_buff;

	if (head != NULL && *head != NULL)
	{
		node_buff = *head;
		n_data = node_buff->n;
		*head = node_buff->next;
		free(node_buff);
	}
	return (n_data);
}

