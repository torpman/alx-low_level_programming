#include "lists.h"

/**
* *add_nodeint_end - This function add node to the end of a list
*
* @head: The node to be updated
* @n: the value to add to the node
* Return: return the address to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/*create new node*/
	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node = last_node->new_node
	}
	return (*head);
}
