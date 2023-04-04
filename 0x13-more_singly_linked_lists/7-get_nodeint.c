#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at an index in a linked list
 * @head: first node in the linked list
 * @index: index of target  node
 *
 * Return: pointer to target node, or otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (i == index && temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
