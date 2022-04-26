#include "lists.h"

/**
* free_listint - This function frees list
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
