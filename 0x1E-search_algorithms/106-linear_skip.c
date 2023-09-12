#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: pointer to the node containing the value, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *go, *prev;

if (list == NULL)
return (NULL);

go = list;

do {
prev = list;
go = go->express;
printf("Value checked at index [%lu] = [%d]\n", go->index, go->n);
} while (go->express && go->n < value);

if (go->express == NULL)
{
list = go;
while (go->next)
go = go->next;
}

printf("Value found between index [%lu] and [%lu]\n", prev->index, go->index);

while (list != go->next)
{
printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
if (list->n == value)
return (list);
list = list->next;
}

return (NULL);
}
