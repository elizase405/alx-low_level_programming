#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: list to be added to
 * @str: node to be added to list
 *
 * Return: pointer to list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 1;
	char *s;
	list_t *temp, *new_node;

	temp = *head;
	s = strdup(str);

	while (str[i] != 0)
		i++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (s == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = s;
	new_node->len =	i;
	new_node->next = temp;

	*head = new_node;

	return (*head);
}
