#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list.
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int j = 0;
	const list_t *temp;

	if (h == NULL)
		return (NULL);

	temp = h;

	while (temp->next != NULL)
	{
		j++;
		temp = temp->next;
	}

	return (++j);
}
