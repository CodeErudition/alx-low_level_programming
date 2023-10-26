#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node at a
 * given index.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: The index of the node to delete (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *node_buff;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		node_buff = *head;
		*head = (*head)->next;
		free(node_buff);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current_node == NULL)
			return (-1);
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
	{
		return (-1);
	}
	node_buff = current_node->next;
	current_node->next = node_buff->next;
	free(node_buff);
	return (1);
}
