#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the head of a list
 * @n: number to be used
 *
 * Return: address of the new element or  NUll if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *temp;

	(void)temp;

	newn = malloc(sizeof(listint_t));

	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = newn;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}

	return (*head);
}
