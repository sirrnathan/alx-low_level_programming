#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_endnode;
	listint_t *temp;

	(void)temp;

	new_endnode = malloc(sizeof(listint_t));

	if (new_endnode == NULL)
		return (NULL);

	new_endnode->n = n;
	new_endnode->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_endnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_endnode;
	}

	return (*head);
}
