#include "search_algos.h"

/**
 * linear_search - Sequentially search an array for a value.
 * Must also print each value compared while searching.
 * @array: Pointer to the first element in the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index of the matched value in the array or -1 if error or not found.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL || size == 0)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (value == array[i])
            return (i);
    }
    return (-1);
}
