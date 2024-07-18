#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t i;

    if (array == NULL)
        return (-1);

    while (array[prev] < value && prev < size)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)prev, array[prev]);
        prev += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)(prev - step), (unsigned long)prev);

    for (i = prev - step; i < size && i <= prev; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

