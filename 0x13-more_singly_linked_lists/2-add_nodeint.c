#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: head of a list
 * @n: integer to use
 *
 * Return: address of the new element or NUll if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->next = *head;
	*head = newn;

	return (*head);
}
