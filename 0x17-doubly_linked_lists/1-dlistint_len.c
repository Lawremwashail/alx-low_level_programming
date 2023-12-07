#include "lists.h"

/**
 * print_dlistint_len - function that returns all elements of dlistint_t list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_dlistint_len(const dlistint_t *h)
{
	int el_num = 0;

	if (h == NULL)
	{
		return (el_num);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		el_num++;
		h = h->next;
	}
	return (el_num);
}
