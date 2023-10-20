#include "lists.h"
/**
 * add_node_end - A function that adds a new node at the end
 * of a list_t list.
 *
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l_node;
	list_t *n_node;

	if (str == NULL)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = strlen(str);
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		l_node = *head;
		while (l_node->next != NULL)
		{
			l_node = l_node->next;
		}
		l_node->next = n_node;
	}

	return (n_node);
}
