#include "search_algos.h"
#include <math.h>
/**
 * jump_list - Searches for a value in a sorted linked list of integers
 *             using the Jump search algorithm.
 * @list: A pointer to the head of the sorted linked list.
 * @size: The number of nodes in the linked list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where the value is located, or NULL
 *         if the value is not found or if the linked list is NULL.
 *
 * Description: Prints the value of each node checked during the search.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump = sqrt(size);
listint_t *prev = NULL, *current = list;
size_t i;

if (list == NULL || size == 0)
return (NULL);

while (current->next && current->n < value)
{
prev = current;
for (i = 0; i < jump && current->next; i++)
current = current->next;

printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
}

printf("Value found between indexes [%lu] and [%lu]\n",
prev ? prev->index : 0, current->index);

while (prev && prev->index <= current->index)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
if (prev->n == value)
return (prev);
prev = prev->next;
}

return (NULL);
}
