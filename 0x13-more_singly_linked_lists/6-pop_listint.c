#include "lists.h"
/**
 * pop_listint - pop head node of  list
 * @head: address of firest node
 * Return: value of poppend node
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
