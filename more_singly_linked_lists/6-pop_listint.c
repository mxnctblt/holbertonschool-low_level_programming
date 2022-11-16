#include "lists.h"

/**
 * pop_listint - function that deletes the head node.
 * @head: head
 * Return: n or if the linked list is empty return 0.
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *choped_head;
	int i;

	if (*head  == NULL)
		return (0);
	choped_head = *head;
	*head = choped_head->next;
	i = (choped_head->n);
	free(choped_head);
	return (i);
}
