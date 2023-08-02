#include "lists.h"

/**
* sum_listint -  returns the sum of all the
* data (n) of a listint_t linked list.
* @head: pointer to struct node
*
* Return: the sum of nodes.
*/

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp->next != NULL)
	{
		i += temp->n;
		temp = temp->next;
	}

	i += temp->n;

	return (i);
}
