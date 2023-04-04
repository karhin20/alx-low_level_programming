#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: linked list to print
 * Return:the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t numnode = 0;

while (h)
{
	printf("%d\n", h->n);
	numnode++;
	h = h->next;
}
return (numnode);
}
