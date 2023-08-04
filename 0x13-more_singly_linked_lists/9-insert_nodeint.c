#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to head
* @idx: index to insert new node in
* @n: new node value
*
* Return: pointer to new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *head;

	if (*head == NULL || idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	}

	return (temp);
}
