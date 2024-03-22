#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 *
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *temp_node;
	Uint node_count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current_node);
		return (1);
	}
	while (current_node != NULL && node_count < index)
	{
		current_node = current_node->next;
		node_count++;
	}
	if (current_node == NULL)
	{
		return (-1);
	}
	temp_node = current_node->prev;
	temp_node->next = current_node->next;
	if (current_node->next != NULL)
	{
		current_node->next->prev = temp_node;
	}
	free(current_node);

	return (1);
}
