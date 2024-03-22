#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a linked list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the data (n) of the list, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int node_sum = 0;

	while (head != NULL)
	{
		node_sum += head->n;
		head = head->next;
	}
	return (node_sum);
}
