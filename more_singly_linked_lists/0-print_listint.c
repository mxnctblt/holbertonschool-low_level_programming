#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: head
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
