#include "lists.h"

/**
 * looped_list_l - A function that counts the number of unique nodes
 * in a looped listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 if the list is not looped else the number of unique nodes
 * in the list.
 */

size_t looped_list_l(const listint_t *head)
{
	const listint_t *c_slow, *c_fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	c_slow = head->next;
	c_fast = (head->next)->next;
	while (c_fast)
	{
		if (c_slow == c_fast)
		{
			c_slow = head;
			while (c_slow != c_fast)
			{
				nodes++;
				c_slow = c_slow->next;
				c_fast = c_fast->next;
			}
			c_slow = c_slow->next;
			while (c_slow != c_fast)
			{
				nodes++;
				c_slow = c_slow->next;
			}
			return (nodes);
		}
		c_slow = c_slow->next;
		c_fast = (c_fast->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - A function that prints a listint_t list safely.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, node_index = 0;

	nodes = looped_list_l(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (node_index = 0; node_index < nodes; node_index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
