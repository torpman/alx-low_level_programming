#include "lists.h"

/**
* *add_nodeint - This function add new node at the begginning of a list
*
* @head: A pointer to the list itself
* @n: the value to be added
* Return: return the address of the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next =  *head;
	*head = new_node;

	return (*head);
}
