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
 * binary_search - Find a value in a sorted array using the binary search method.
 * @array: Pointer to the first element in the array to be searched.
 * @size: Size of the array (number of elements).
 * @value: Value to be searched for.
 *
 * Return: Index position of the value or -1 if not found or the array is null.
 */
int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid;

    if (array == NULL || size == 0)
        return (-1);

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        print_array(&array[low], (high - low) + 1);

        if (array[mid] == value)
            return (mid);

        if (array[mid] > value)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return (-1);
}

/**
 * exponential_search - Search for a value in a sorted array using exponential
 * search and binary search algorithms.
 * @array: Pointer to the array to be searched.
 * @size: Size of the array (number of elements).
 * @value: The value to be searched for.
 *
 * Return: First index value is found at or -1 if not present or the array is null.
 */
int exponential_search(int *array, size_t size, int value)
{
    int lower_bound;
    int upper_bound = 1;
    int value_position;

    if (array == NULL || size == 0)
        return (-1);

    while (upper_bound < (int)size && array[upper_bound] < value)
    {
        printf("Value checked array[%d] = [%d]\n", upper_bound, array[upper_bound]);
        lower_bound = upper_bound;
        upper_bound *= 2;
    }

    if (upper_bound >= (int)size)
        upper_bound = size - 1;

    printf("Value found between indexes [%d] and [%d]\n", lower_bound, upper_bound);
    value_position = binary_search(&array[lower_bound], upper_bound - lower_bound + 1, value);

    if (value_position != -1)
        value_position += lower_bound;

    return (value_position);
}
