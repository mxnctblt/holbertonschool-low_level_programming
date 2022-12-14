#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: head
 * Return: the sum of all the data (n)
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
