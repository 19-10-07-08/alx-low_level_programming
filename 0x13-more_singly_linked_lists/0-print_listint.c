#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - function prints a listint with newlines
 * @h: head of list to print
 *
 * Return: length of list
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
