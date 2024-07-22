#include <stdio.h>
#include "search_algos.h"

void print_array(int *array, size_t low, size_t high)
{
    size_t i;
    for (i = low; i <= high; i++)
    {
        printf("%d", array[i]);
        if (i < high)
            printf(", ");
    }
    printf("\n");
}

int binary_search(int *array, size_t low, size_t high, int value)
{
    while (low <= high)
    {
        size_t mid = low + (high - low) / 2;

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    size_t bound = 1;
    size_t low, high;

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)bound, array[bound]);
        bound *= 2;
    }

    low = bound / 2;
    high = (bound < size) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)low, (unsigned long)high);

    return binary_search(array, low, high, value);
}

