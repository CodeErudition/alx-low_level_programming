#include "lists.h"

/**
 * free_list - A function that frees a list_t list, including
 * the strings in each node.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: Void.
 */

void free_list(list_t *head)
{
	list_t *d_list;

	for (; head != NULL;)
	{
		d_list = head;
		head = head->next;
		free(d_list->str);
		free(d_list);
	}
}
