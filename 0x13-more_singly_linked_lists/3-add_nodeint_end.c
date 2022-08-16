#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head pointer of linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t)); /* make new node and set data */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /* validate that head is not null */
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL) /* iterate till last node */
			tmp = tmp->next;
		tmp->next = new_node; /* link last node to new node */
	}

	return (new_node);
}
