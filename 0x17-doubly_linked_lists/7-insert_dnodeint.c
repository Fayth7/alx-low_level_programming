#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_t *insert_dnodeint_at_index -  inserts a new node
 * @h: Pointer to the address of the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data value of the new node to be inserted.
 * Return: If the new node was successfully added, the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int count = 0;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (*h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (*h == NULL)
{
*h = new_node;
return (new_node);
}
current = *h;
while (current != NULL)
{
if (count == idx)
{
new_node->next = current;
new_node->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new_node;
current->prev = new_node;
if (idx == 0)
*h = new_node;
return (new_node);
}
current = current->next;
count++;
}
free(new_node);
return (NULL);
}
