#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all data listint
 *
 * @head: head of the list
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int sum = 0;

	while (new)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
