#include "lists.h"

/**
 * add_nodeint - function for adding a new node
 * @head: head a list int
 * @n: n int element
 * Return: return the adress of new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *j;

	j = 0;

	j = malloc(sizeof(listint_t));

	if (j == NULL)
		return (NULL);

	j->n = n;
	j->next = *head;
	*head = j;

	return (*head);

}
