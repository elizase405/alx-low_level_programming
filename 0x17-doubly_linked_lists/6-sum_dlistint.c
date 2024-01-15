#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n)
 * of a dlistint_t linked list
 * @head: pointer to linked list
 *
 * Return: sum of data in linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
