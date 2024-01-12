#include "lists.h"

/**
 * size_t print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of nodes
 *
 * return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	printf("%d\n", h->n);
	return ++count;
}
