#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete the node index
 * @head: head of the list
 * @index: index of the list when the node is deleted
 * Return: 1 when successful -1 when fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *p;
	listint_t *n;

	p = *head;

	if (index != 0)
	{
		for (k = 0; k < index - 1 && p != NULL; k++)
		{
			p = p->next;
		}
	}
	if (p == NULL || (p->next == NULL && index != 0))
	{
		return (-1);
	}
	n = p->next;
	if (index != 0)
	{
		p->n = n->n;
		free(n);
	}
	else
	{
		free(p);
		*head = n;
	}
	return (1);
}
