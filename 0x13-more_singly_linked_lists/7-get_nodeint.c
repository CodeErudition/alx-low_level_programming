#include "lists.h"

/**
 * get_nodeint_at_index - A function that  Returns the nth node of a
 * listint_t linked list.
 *
 * @head: A pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node or NULL if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_index = 0;
	listint_t *current_node = head;

	for (; current_node != NULL; current_node = current_node->next)
	{
		if (node_index == index)
		{
			return (current_node);
		}
		node_index++;
	}
	return (NULL);
}
