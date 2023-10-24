#include "lists.h"

/**
 * free_listint - A function that Frees a listint_t list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *current_node, *temp;

	for (current_node = head; current_node != NULL;)
	{
		temp = current_node->next;
		free(current_node);
		current_node = temp;
	}
}

