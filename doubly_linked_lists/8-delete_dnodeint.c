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

	if (*head == NULL)
		return (-1);
	while (cpy != NULL)
	{
		i++;
		cpy = cpy->next;
	}
	if (i < index + 1)
		return (-1);

	cpy = *head;
	if (index == 0)
	{
		*head = cpy->next;
		if (cpy->next)
			cpy->next->prev = NULL;
		cpy->next = NULL;
		free(cpy);
		return (1);
	}
	while (index--)
		cpy = cpy->next;
	cpy->prev->next = cpy->next;
	if (cpy->next)
		cpy->next->prev = cpy->prev;
	free(cpy);
	return (1);
}
