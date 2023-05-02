#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of a list
 * Return: the address of the node where the loop starts
 * or NULL - if there is loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n1;
	listint_t *n2;

	n1 = head;
	n2 = head;
	while (head && n1 && n1->next)
	{
		head = head->next;
		n1 = n1->next->next;

		if (head == n1)
		{
			head = n2;
			n2 =  n1;
			while (1)
			{
				n1 = n2;
				while (n1->next != head && n1->next != n2)
				{
					n1 = n1->next;
				}
				if (n1->next == head)
					break;

				head = head->next;
			}
			return (n1->next);
		}
	}

	return (NULL);
}
