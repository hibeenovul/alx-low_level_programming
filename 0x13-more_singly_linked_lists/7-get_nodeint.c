#include "lists.h"

/**
 * get_nodeint_at_index - funcion that return the nth node of a linked list
 * @head: head of the list
 * @index: index of the node
 * Return: return NULL if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index && head != NULL; k++)
	{
		head = head->next;
	}
	return (head);
}
