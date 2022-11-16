#include "lists.h"

/**
 *
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *current;

	if (head != NULL)
	{
		current = *head;
		while ((new = current) != NULL)
		{
			current = current->next;
			free(new);
		}
		*head = NULL;
	}
}
