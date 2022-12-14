#include "lists.h"
#include <stdlib.h>


/**
 * add_node - addds the node at the beginning of a linked list
 * @head: pointer of the head of the list
 * @str: string to be used as the content of the node
 *
 * Return: address of the newly added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
		if (new_node != NULL)
		{
			new_node->str =  strdup(str);
			new_node->len = _strlen(str);
			new_node->next = *head;
		}
	else
		return
	(NULL);
		if (*head != NULL)
		new_node->next = *head;
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
