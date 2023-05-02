#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index of listint
 *
 * @head: head of the list
 * @index: index of the list
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *ptr, *new;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (1);
	}
	ptr = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	new = ptr->next;
	ptr->next = new->next;
	free(new);
	return (1);
}
