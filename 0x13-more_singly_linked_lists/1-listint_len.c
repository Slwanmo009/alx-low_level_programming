#include "lists.h"
/**
 * listint_len - prints a linked listes
 * @h: pointer to firest node
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
