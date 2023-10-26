#include "lists.h"

/**
 * print_listint_safe - A function that prints a listint_t linked list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = head;
	size_t node_count = 0;

	while (current_node)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		node_count++;
		current_node = current_node->next;
		if (current_node == head)
		{
			fprintf(stderr, "Connected nodes: %zu\n", node_count);
			exit(98);
		}
	}

	return (node_count);
}

