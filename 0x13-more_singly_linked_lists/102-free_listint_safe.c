#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: double pointer to the head of the list
 *
 * This function frees a linked list of type listint_t in a safe manner, i.e.,
 * by going through the list only once and setting each node's next pointer to
 * NULL before freeing it. The function also sets the head to NULL after all
 * the nodes have been freed.
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;  /* set head to NULL before freeing */

	while (current != NULL)
	{
		size++;
		next = current->next;
		current->next = NULL;  /* set next pointer to NULL before freeing */
		free(current);
		current = next;

		/* check for a loop in the list */
		if (next != NULL && next >= current)
		{
			size++;
			break;
		}
	}

	return (size);
}
