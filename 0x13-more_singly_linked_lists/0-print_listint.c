#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - function prints a listint with newlines
 * @h: head of list to print
 * Return: length of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	for (count = 0; h != NULL; h = h->next, count++)
		printf("%d\n", h->n);

	return (count);
}
