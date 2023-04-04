#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to listint_t list
 */


void free_listint2(listint_t **head)
{
	listint_t check;

	while (*head)
	{
		check = *head;
		*head = (*head)->next;
		free(check);
	}
	*head = NULL;
}
