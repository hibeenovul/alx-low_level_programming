#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a new node
 * @head: head of a list
 * @idx: index of a list when the node is added
 * @n: int element
 * Return: return the address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *f;
	listint_t *j;

	f = *head;

	if (idx != 0)
	{
		for (k = 0; k < idx - 1 && f != NULL; k++)
		{
			j = j->next;
		}
	}
	if (j == NULL && idx != 0)
		return (NULL);
	f = malloc(sizeof(listint_t));
	if (f == NULL)
		return (NULL);

	f->n = n;

	if (idx == 0)
	{
		f->next = *head;
		*head = f;
	}
	else
	{
		f->next = j->next;
		j->next = f;
	}
	return (f);
}
