#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t count = 0;

while (current != NULL)
{
count++;
current = current->next;
}

return (count);
}
