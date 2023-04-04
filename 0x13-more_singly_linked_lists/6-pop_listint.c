#include "lists.h"

/**
 * pop_listint - function that delete the node of a linked list
 * @head: head of list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int gnode;
	listint_t *g;

	listint_t *j;

	if (*head == NULL)
		return (0);

	j = *head;
	gnode = j->n;
	g = j->next;

	free(j);
	*head = g;

	return (gnode);
}
