#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - function write number of elements in a linked listint
 * @h: pointer head
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h == NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
