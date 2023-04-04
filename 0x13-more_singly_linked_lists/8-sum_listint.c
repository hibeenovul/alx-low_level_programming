#include "lists.h"

/**
 * sum_listint - function that sum all the list int of a linked list
 * @head: head of a list
 * Return: if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
