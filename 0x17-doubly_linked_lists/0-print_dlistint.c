#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: first element of the list.
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h);
{
	int count;

	count = 0;

	while (h != Null)
	{
		count++;
		p = p->next;
	}
	return (count);

	while (h != NULL)
	{
		print("%d", h->prev);
		h++;
		h = h->next;
	}
	return (count);
}
