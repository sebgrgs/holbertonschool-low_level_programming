#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	while (str[i])
	{
		i++;
	}

	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

	h = h->next;
	count++;
	}
	return (count);
}
