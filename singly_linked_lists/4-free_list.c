#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: head of the linked list to free.
 */
void free_list(list_t *head)
{

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
