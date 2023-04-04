#include "lists.h"

/**
 * free_listint - function to free list int
 * @head: head of list
 * Return: 0 always
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	i = 0;

	while ((i = head) != NULL)
	{
		head = head->next;
		free(i);
	}
}
