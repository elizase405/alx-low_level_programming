#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer to pointer of nodes
 * @n: new node value to be added
 *
 * Return: pointer to node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
