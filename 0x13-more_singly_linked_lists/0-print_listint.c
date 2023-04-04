#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of the list_t list
 *
 * Return: The number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h) /*my argument*/
{
	size_t nodes = 0; /*declared my size_t */
/* while loop*/
	while (h)
	{/*implementation of nodes, printf*/
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
