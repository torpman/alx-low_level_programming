#include "lists.h"

/**
* pop_listint - This function pop out the head of a list
*
* @head: the list
*
* Return: return the popped element
*/

int pop_listint(listint_t **head)
{
	listint_t *temp, *current;
	int value;

	if (*head == NULL)
		return (0);

	temp = *head;
	value = temp->n;
	current = temp->next;
	*head = current;
	free(temp);

	return (value);
}

