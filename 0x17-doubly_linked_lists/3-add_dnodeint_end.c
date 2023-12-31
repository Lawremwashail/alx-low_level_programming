#include "lists.h"
/**
 * add_dnodeint_end - function that adds node at the end of the list
 * @head: head pointer
 * @n: element value
 * Return: address of the new element, NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = h;
	return (new_node);
}
