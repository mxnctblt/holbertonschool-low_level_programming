#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node -  function that adds a new node at the beginning of a list_t list.
 * @head: pointer functionY
 * @str: the duplicated string to print
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *n;
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	n = strdup(str);
	if (n == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = n;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
