#include <stdlib.h>
#include "list.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return:void
 */

void free_list(list_t *head)
{
	list_t *first, *next;

	first = head;
	while (first != NULL)
	{
		next = first->next;

	free(first->str);
	free(first);
			first = next;
		}
}
