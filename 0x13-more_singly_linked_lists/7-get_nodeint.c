#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: pointer to struct node
* @index: index of struct node to return
*
* Return: the node of specified index.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (i != index)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}

	return (temp);
}
