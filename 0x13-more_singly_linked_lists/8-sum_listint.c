#include "lists.h"

/**
* sum_listint - The function sum all the data of the passed list
*
* @head: the list
*
* Return: return the sum on success
*/

int sum_listint(listint_t *head)
{
	size_t sum, data;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		data = head->n;
		sum += data;
		head = head->next;
	}
	return (sum);
}
