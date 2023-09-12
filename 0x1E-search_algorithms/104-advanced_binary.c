#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the new array being searched every time it is split.
 *              Uses recursion for binary search.
 */
int advanced_binary(int *array, size_t size, int value)
{
  size_t i, mid;
  int found = -1;

  if (array == NULL || size == 0)
    {
      return (-1);
    }

  printf("Searching in array: ");
  for (i = 0; i < size; i++)
    {
      printf("%d", array[i]);
      if (i < size - 1)
	{
	  printf(", ");
	}
      else
	{
	  printf("\n");
	}
    }

  mid = size / 2;

  if (array[mid] == value)
    {
      if ((mid == 0 || array[mid - 1] != value) && (size == 1 || array[mid + 1] != value))
	{
	  return ((int)mid);
	}
      else
	{
	  found = advanced_binary(array, mid + 1, value);
	  return (found != -1 ? (int)mid : found);
	}
    }
  else if (array[mid] > value)
    {
      return advanced_binary(array, mid, value);
    }
  else
    {
      found = advanced_binary(array + mid + 1, size - mid - 1, value);
      return (found == -1 ? -1 : (int)(mid + 1 + found));
    }
}
