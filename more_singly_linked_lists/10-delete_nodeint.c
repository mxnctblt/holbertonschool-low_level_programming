#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: node
 * @index: index of the list where the new node should be added.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *cpy = *head;
	unsigned int i = 0;

	if (cpy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}

	new = cpy->next;
	cpy->next = new->next;
	free(new);

	return (1);
}
