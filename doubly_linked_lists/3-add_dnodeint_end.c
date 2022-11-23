#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: pointer to the first node's pointer
 * @n: data of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	end = *head;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (end->next != NULL)
		end = end->next;

	end->next = new;
	new->prev = end;
	return (new);
}
