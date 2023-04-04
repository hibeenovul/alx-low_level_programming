#include "lists.h"

/**
 * free_listint2 - function that frees list int
 * @head: head of list
 * Return: 0 when successful
 */
void free_listint2(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	if (head != NULL)
	{
		j = *head;
		while ((i = j) != NULL)
		{
			j = j->next;
			free(i);
		}
		*head = NULL;
	}
}
