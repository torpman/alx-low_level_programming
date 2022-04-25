#include "lists.h"

/**
* listint_len - This function print the number of elements in a list
* @h: The list to count its element
*
* Return: Return the number of elements in h
*/

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
