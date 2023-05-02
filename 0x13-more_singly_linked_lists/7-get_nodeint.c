#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of listint
 *
 * @head: head of list
 * @index: index of the node
 *
 * Return: pointer of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
