#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function frees a listint_t
 * @head: head of the list
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
