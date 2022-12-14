#include "lists.h"


/**
 * add_dnodeint - Function
 * @head: node element
 * @n: new node value
 * Return: New node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
