#include "lists.h"

/**
 * list_len - find s the number of elements in a linked list
 * @h: pointer to the start of a linked list
 *
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
