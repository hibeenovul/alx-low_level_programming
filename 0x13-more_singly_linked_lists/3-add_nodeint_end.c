#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: head of a list
 * @n: n element
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *j;
	listint_t *i;

	(void)i;

	j = malloc(sizeof(listint_t));

	if (j == NULL)
		return (NULL);

	j->n = n;
	j->next = NULL;
	i = *head;
	if (*head == NULL)
	{
		*head = j;
	}
	else
	{
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = j;
	}
	return (*head);
}
