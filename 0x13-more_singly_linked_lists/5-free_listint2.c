#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 *
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *node_buff;

	if (head == NULL)
	{
		return;
	}
	current_node = *head;
	while (current_node != NULL)
	{
		node_buff = current_node->next;
		free(current_node);
		current_node = node_buff;
	}
	*head = NULL;
}
