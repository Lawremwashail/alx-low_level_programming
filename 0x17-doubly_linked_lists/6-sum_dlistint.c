#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of data in a list
 * @head: head pointer
 * Return: 0 if list is empty else sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}
	return (total);
}
