#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: string
 * Return: the number of element linked
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
