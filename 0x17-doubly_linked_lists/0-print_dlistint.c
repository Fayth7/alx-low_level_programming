#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: name of the pointer
 * Return: Count
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t count = 0;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return (count);
}
