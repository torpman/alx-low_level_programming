#include "lists.h"

/**
* print_list - This function prints the element of a linked list
*
* @h: the head of the list
* Return: return the lenght of the list
*/

size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;

		if (h->str == NULL)
			printf("[%d] %s", 0, "(nil)");

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;

	}


	return (count);
}
