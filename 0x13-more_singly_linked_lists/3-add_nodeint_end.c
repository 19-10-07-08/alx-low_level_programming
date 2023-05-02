#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - function that adds node at end of a listint_t
  *
  * @head: head of list
  * @n: value
  * Return: NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
	*head = new_n;
		return (new_n);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_n;
	return (new_n);
}
