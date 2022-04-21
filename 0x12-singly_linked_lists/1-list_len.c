#include "lists.h"

/**
* list_len - This function return the number of elements in a linked list
*
* @h: The head of he list
*
* Return: return the number of element
*/

size_t list_len(const list_t *h)
{
	size_t count;

	count = 1;
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
