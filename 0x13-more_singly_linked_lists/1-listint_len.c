#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list.
* @h: list ot be printed
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}

	return (++i);
}
