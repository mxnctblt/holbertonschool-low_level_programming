#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: node
 * Return: the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
