#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse to position idx-1 */
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* Check if we can insert at given position */
	if (temp == NULL)
		return (NULL);

	/* If inserting at end */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set up node connections */
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
