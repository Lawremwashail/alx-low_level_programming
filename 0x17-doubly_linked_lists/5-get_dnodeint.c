#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns thet nth node in alist
 * @head: head pointer
 * @index: index of the node
 * Return: NULL if no node, nth node if success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (head != NULL)
	{
		if (n == index)
		{
			break;
		}
		head = head->next;
	}
	return (head);
}
