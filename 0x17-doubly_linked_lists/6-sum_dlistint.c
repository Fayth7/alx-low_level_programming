#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * int sum_dlistint - returns the sum of all data of a dlistint_t linked list
 * @head: Pointer to the head of the doubly linked list.
 * Return: The sum of all the data values.
 * If the list is empty, returns 0
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
