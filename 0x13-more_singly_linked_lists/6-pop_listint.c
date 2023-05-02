#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the head of a list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;
	listint_t *curent;

	if (*head == NULL)
		return (0);

	curent = *head;

	n = curent->n;

	h = curent->next;

	free(curent);

	*head = h;

	return (n);
}
