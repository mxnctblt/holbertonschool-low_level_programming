#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: head
 * @n: n
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	tail = *head;
	
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
	return (new);
}
