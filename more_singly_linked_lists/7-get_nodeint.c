#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node
 * @head: head
 * @index: total of nodes
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
