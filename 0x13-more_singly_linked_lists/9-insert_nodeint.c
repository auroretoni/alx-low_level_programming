#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 * at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 * @n    : value for the new node to be added
 * Return: the address of the new node,
 *         or NULL - if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int x;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = temp;
*head = new;
return (new);
}

for (x = 0; x < (idx - 1); x++)
{
if (temp == NULL || temp->next == NULL)
return (NULL);

temp = temp->next;
}

new->next = temp->next;
temp->next = new;

return (new);
}
