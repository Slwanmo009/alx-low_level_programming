#include "lists.h"
/**
 * sum_dlistint - sums the value of the dlist
 * @head: pointer to current head not
 * Return: int sum of value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
