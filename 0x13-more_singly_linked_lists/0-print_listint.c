#include "lists.h"
/**
* print_listint - This function prints all the elements of a lists
*
* @h: Pointer to the list to print its elements
*
* Return: Return the elements of the list on success
*/

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
