#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int j = 0;
	const list_t *temp;

	if (h == NULL)
		return (NULL);

	temp = h;

	while (temp->next != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", temp->len);
			printf("%s\n", temp->str);
		}
		temp = temp->next;
		j++;
	}

	printf("[%d] ", temp->len);
	printf("%s\n", temp->str);

	return (++j);
}
