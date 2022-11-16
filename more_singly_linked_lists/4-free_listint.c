#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
