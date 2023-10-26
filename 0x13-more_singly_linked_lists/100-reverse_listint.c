#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *last_node = NULL;
	listint_t *next_node = NULL;

	for (; *head != NULL; *head = next_node)
	{
		next_node = (*head)->next;
		(*head)->next = last_node;
		last_node = *head;
	}

	*head = last_node;
	return last_node;
}

