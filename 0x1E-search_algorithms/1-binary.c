#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where 'value' is located, or -1 if not found or if 'array'
 * is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
int left, right, mid, i;
if (array == NULL)
return (-1);

left = 0;
right = (int)size - 1;

printf("Searching in array: ");

for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
else
printf("\n");
}

while (left <= right)
{
mid = left + (right - left) / 2;

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;

printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
else
printf("\n");
}
}
return (-1);
}
