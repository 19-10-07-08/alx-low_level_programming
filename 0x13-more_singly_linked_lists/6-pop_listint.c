#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of list int
 * @head: head of list
 *
 * Return: empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
