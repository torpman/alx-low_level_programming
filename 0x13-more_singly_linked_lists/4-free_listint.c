#include "lists.h"

/**
* free_list - This function free list
*
* @head: the list to be freed
*/

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
