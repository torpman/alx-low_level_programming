#include "lists.h"

/**
* *add_node - This function adds a new node at the beginning
*
* @head: The list in which new node is added
* @str: the string to be added to the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	i = 0;
	new_node = malloc(sizeof(list_t));

	while (str[i] != '\0')	
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
