#include "list.h"

/**
 * add_node_end - adds a node at the end of the linked list
 * @head: pointer to the head of the list
 * @str: string to be used as the content of the newly node
 *
 * Return: address of the newly added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *first = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (first != NULL)
	{
		while (first->next != NULL)

		first = first->next;
		first->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}

/**
 * _strlen - counts the length of the string
 * @str: string to be counted
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
