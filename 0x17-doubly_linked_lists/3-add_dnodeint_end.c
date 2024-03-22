#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end list
 *
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *temp_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;

	if (*head != NULL)
	{
		temp_node = *head;
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = n_node;
		n_node->prev = temp_node;
	}
	else
	{
		*head = n_node;
		n_node->prev = NULL;
	}
	return (n_node);
}
