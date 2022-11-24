#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: node
 * @index: index of the list where the new node should be added.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cpy = *head;
	unsigned int i = 0;

	if (cpy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}

	if (index == 0)
	{
		cpy->prev->next = cpy->next;
		if (cpy->next != NULL)
			cpy->next->prev = cpy->prev;
		free(cpy);
		return (1);
	}
	return (-1);
}
