#include "lists.h"

/**
 * print_dlistint - function that print all elements of a dlistint.
 * @h: pointer to node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
