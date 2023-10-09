#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Search for a value in a sorted array using
 * interpolation search.
 * @array: Pointer to the start of the array.
 * @size: The size of the array (number of elements).
 * @value: The value to be searched for.
 *
 * Return: First index value is found at or -1 if not present or array is null.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t pos;
    int low = 0;
    int high = size - 1;

    if (array == NULL || size == 0)
        return (-1);

    while (low <= high)
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        if (pos > size - 1)
        {
            printf("Value checked array[%ld] is out of range\n", pos);
            return (-1);
        }

        printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
        {
            return (pos);
        }
        else
        {
            if (array[pos] > value)
                high = pos - 1;
            else
                low = pos + 1;
        }
    }

    return (-1);
}
