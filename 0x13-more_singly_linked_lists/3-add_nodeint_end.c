#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: pointer to pointer storing first node
* @n: element of new node to be added
*
* Return: pointer to listint_t
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *temp;

	if (head == NULL)
		return (NULL);

	end = malloc(sizeof(listint_t));

	if (end	== NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
		*head = end;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}

	return (*head);
}
