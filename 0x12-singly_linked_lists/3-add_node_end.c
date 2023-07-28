#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to head
 * @str: new struct node string value
 *
 * Return: pointer to list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp;
	unsigned int i = 0;
	char *s;

	s = strdup(str);

	while (s[i] != 0)
		i++;

	if (s == NULL)
		return (NULL);

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);

	end_node->str = s;
	end_node->len = i;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end_node;
	}

	return (*head);
}
