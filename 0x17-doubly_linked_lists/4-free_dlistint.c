#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free_dlistint
 * @head: Pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
