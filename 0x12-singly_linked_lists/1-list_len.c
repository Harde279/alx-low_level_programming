#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t numElem = 0;

	while (h != NULL)
	{
		NumElem++;
		h = h->next;
	}

	return (NumElem);
}
