#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *
 *Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);  /* The list is empty */
	}

	temp = *head;  /* Save the current head node */
	data = temp->n;  /* Get the data of the head node */
	*head = temp->next;  /* Make the next node the new head */
	free(temp);  /* Free the memory of the old head node */
	return (data);
}
