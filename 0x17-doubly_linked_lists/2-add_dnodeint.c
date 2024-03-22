#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 *
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->prev = NULL;

	n_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = n_node;
	}
	*head = n_node;
	return (n_node);
}
