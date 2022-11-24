#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given po
 * @h: head
 * @idx: index of the list where the new node should be added.
 * @n: data of new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cpy = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		cpy = cpy->next;
		if (cpy == NULL)
			return (NULL);
		i++;
	}
	if (cpy->next == NULL)
		return (add_dnodeint_end(h, n));


	new->prev = cpy;
	new->next = cpy->next;
	cpy->next->prev = new;
	cpy->next = new;

	return (new);
}
