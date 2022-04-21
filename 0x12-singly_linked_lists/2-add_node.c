#include "lists.h"

/**
* *add_node - This function adds a new node at the beginning
*
* @head: The list in which new node is added
* @str: the string to be added to the new node
*
* Return: return a pointer to the address of the new list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i;

	i = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
