#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list to return elements
 * return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t numnode = 0;

for (; h != NULL; h = h->next)
{
	numnode++;
}
return (numnode);
}
