#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - A function that prints a listint_t linked list
 *
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t node_count = 0;

	slow_ptr = head;
	fast_ptr = head;
	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		node_count++;
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			fprintf(stderr, "Connected nodes: %lu\n", node_count);
			exit(98);
		}
	}
	if (fast_ptr && fast_ptr->next)
	{
		fast_ptr = fast_ptr->next;
		node_count++;
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		printf("[%p] %d\n", (void *)fast_ptr, fast_ptr->n);
	}
	else
	{
		while (slow_ptr)
		{
			node_count++;
			printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			slow_ptr = slow_ptr->next;
		}
	}
	return (node_count);
}

