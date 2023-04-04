#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: The listint_t list
 * Return: the mumber of nodes in h
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		Printf("%d\n", h->n);
		h = h->next;

		nodes++;
	}

	return (nodes);
}
