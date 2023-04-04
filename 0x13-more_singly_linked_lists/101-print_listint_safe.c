#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr, *prev, *temp;

	curr = head;
	prev = NULL;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		count++;

		temp = curr;
		curr = curr->next;

		if (temp < curr && curr != NULL)
		{
			prev = temp;
			temp = curr;
			while (temp != NULL)
			{
				printf("[%p] %d\n", (void *)temp, temp->n);
				count++;
				if (temp == curr)
					break;
				temp = temp->next;
			}
			exit(98);
		}
	}

	return (count);
}
