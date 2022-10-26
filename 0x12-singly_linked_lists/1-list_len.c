#include "list.h"

/**
 * list_len - finds the number of elements in alinked list
 * @h: pointer to the start of the linked list
 *
 * Return: number of elements in the linkked list
 */

size_t list_len(const list_t *h)
{
	cost list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
