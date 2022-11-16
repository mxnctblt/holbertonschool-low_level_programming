#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: head
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
