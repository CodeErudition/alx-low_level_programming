#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements
 * of a list_t list.
 * 
 * @h: A pointer to the head of the list.
 *
 * Return:int (int this case the number of nodes in the list).
 */

size_t print_list(const list_t *h)
{
	size_t indx;

	for (indx = 0; h != NULL; indx++)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}
	return (indx);
}

