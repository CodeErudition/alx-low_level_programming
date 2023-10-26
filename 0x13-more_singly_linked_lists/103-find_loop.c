#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 *
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *c_slow = head;
	listint_t *c_fast = head;

	if (!head)
	{
		return (NULL);
	}
	while (c_slow && c_fast && c_fast->next)
	{
		c_fast = c_fast->next->next;
		c_slow = c_slow->next;
		if (c_fast == c_slow)
		{
			c_slow = head;
			while (c_slow != c_fast)
			{
				c_slow = c_slow->next;
				c_fast = c_fast->next;
			}
			return (c_fast);
		}
	}
	return (NULL);
}
