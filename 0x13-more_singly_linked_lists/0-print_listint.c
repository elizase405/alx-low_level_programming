#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: list ot be printed
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
    int i = 0;
    const listint_t *temp;

    if (h == NULL)
        return (0);

    temp = h;

    while (temp->next != NULL)
    {
        printf("%d\n", temp->n);
        i++;
        temp = temp->next;
    }
    
    printf("%d\n", temp->n);
    
    return (++i);
}
