#include "lists.h"

/**
 * listint_len - function for listed int length
 * @h: head of a list
 * Return: return the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes;

	nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
