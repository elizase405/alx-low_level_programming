#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to pointer of nodes
 * @n: new node value to be added
 *
 * Return: pointer to node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = temp;
	new->next = NULL;

	if (!temp)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
