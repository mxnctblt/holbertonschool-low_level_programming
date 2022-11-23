#include "lists.h"

/**
 * dlistint_len - function that that returns the number of elements
 * @h: pointer to node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
