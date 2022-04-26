#include "lists.h"

/**
* insert_nodeint_at_index - This function inserts new node
* at a given postition
*
* @head: The list to insert new node into
* @idx: The index of the list where the node should be added
* @n: The data of of the node that will be added
*
* Return: Return the address of the new list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *curr_node;

	curr_node = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && curr_node != NULL; i++)
			curr_node = curr_node->next;
	}

	if (curr_node == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		head = new_node;
	}
	else
	{
		new_node->next = curr_node->next;
		curr_node->next = new_node;
	}

	return (curr_node);

}
