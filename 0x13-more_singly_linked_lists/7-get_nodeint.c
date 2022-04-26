#include "lists.h"
/**
* *get_nodeint_at_index - This function returns the nth node of a list
* @head: The list
* @index: the index of the node to return
*
* Return: return data of the node on success
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	i = 0;
	while (head != NULL)
	{

		if (i == index)
		{
			return(head);
			break;
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
