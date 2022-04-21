#include "lists.h"

/**
* free_list - This function free list
*
* @head: the list to be freed
*/

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
