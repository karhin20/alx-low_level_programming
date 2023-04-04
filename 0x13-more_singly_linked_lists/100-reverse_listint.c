#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prevnode = NULL;
listint_t *nextnode = NULL;

while (*head)
{
nextnode = (*head)->nextnode;
(*head)->nextnode = prevnode;
prevnode = *head;
*head = nextnode;
}

*head = prevnode;

return (*head);
}
