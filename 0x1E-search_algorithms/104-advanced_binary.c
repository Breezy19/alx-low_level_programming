#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @array: Pointer to the start of the array.
 * @size: Size of the array (number of elements).
 *
 * Return: Nothing.
 */
void print_array(int *array, int size)
{
    int i;

    if (array == NULL || size == 0)
        return;

    printf("Searching in array: ");

    for (i = 0; i < size; i++)
    {
        if (i == 0)
            printf("%d", array[i]);
        else
            printf(", %d", array[i]);
    }

    printf("\n");
}

/**
 * recursive_binary_search - Searches for a value in a sorted array recursively
 * with the binary search method.
 * @array: Pointer to the array to be searched.
 * @low: Sub-array start point.
 * @high: Sub-array end point.
 * @value: The value to be searched for.
 *
 * Return: First index value found at or -1 if not present.
 */
int recursive_binary_search(int *array, int low, int high, int value)
{
    int mid;

    if (low > high)
        return (-1);

    mid = (low + high) / 2;

    print_array(&array[low], high - low + 1);

    if (array[mid] == value)
    {
        if (mid == low || array[mid - 1] != value)
            return (mid);
    }

    if (array[mid] < value)
        return (recursive_binary_search(array, mid + 1, high, value));
    else
        return (recursive_binary_search(array, low, mid - 1, value));
}

/**
 * advanced_binary - Implement binary search on a sorted array ensuring the value
 * found index is the first index, using a recursive approach.
 * @array: The array to be searched.
 * @size: Size of the array (number of elements).
 * @value: The value to be searched for.
 *
 * Return: First index value found at or -1 if not present or the array is null.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return (recursive_binary_search(array, 0, size - 1, value));
}
