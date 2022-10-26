#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements
 * iet nu
 *  a linkled listint_t list.
 * @h: a pointer to the head of the listint_t list
 *
 * Return: The number of elements inthe listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
		return (nodes);
}
