#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n) of a
 * listint_t linked list.
 *
 * @head: A pointer to the head of the  list.
 *
 * Return: The sum of all the data(n) of listint_t, other (0) when
 * the list is empty.
 */

int sum_listint(listint_t *head)
{
	int node_sum = 0;
	listint_t *current_node = head;

	for (; current_node != NULL; current_node = current_node->next)
	{
		node_sum += current_node->n;
	}
	return (node_sum);
}
