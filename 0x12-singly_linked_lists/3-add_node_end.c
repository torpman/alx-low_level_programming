#include "lists.h"

/**
* *add_node_end - This function adds a new node at the beginning
*
* @head: The list in which new node is added
* @str: the string to be added to the new node
* Return: return a pointer to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int i;

	i = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);

	return (*head);
}
