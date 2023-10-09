#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Binary search an ascending sorted array to find a value.
 * No duplicates in the array. Must print the subarray at each split.
 * @array: Pointer to the first element in the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index of the matched value in the array or -1 if error or not found.
 */
int binary_search(int *array, size_t size, int value)
{
    int tmp;
    size_t b = 0;

    if (array == NULL || size == 0)
        return (-1);
    size--;
    while (b <= size)
    {
        print_array(array, b, size);

        tmp = (size - b) / 2 + b;
        if (array[tmp] == value)
            return (tmp);
        else if (array[tmp] < value)
        {
            if (size % 2 == 1)
                b = tmp + 1;
            else
                b = tmp;
        }
        else
        {
            if (size % 2 == 1)
                size = tmp;
            else
                size = tmp - 1;
        }
    }
    return (-1);
}

/**
 * print_array - Print the current array given rules on format.
 * @array: Array to print.
 * @inc: Starting incrementer index.
 * @size: Increment up to this size.
 */
void print_array(int *array, size_t inc, size_t size)
{
    printf("Searching in array: ");
    for (; inc <= size; inc++)
    {
        printf("%d", array[inc]);
        if (inc < size)
            printf(", ");
    }
    printf("\n");
}
