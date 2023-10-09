#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Search a single linked list using the jump search method.
 * @list: Pointer to the first node in the linked list.
 * @size: Size of the list (number of nodes).
 * @value: Value to be searched for.
 *
 * Return: Pointer to the first node containing the value or NULL if not present
 * or the list is empty.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    listint_t *hold = list;
    int i, jump;

    if (list == NULL || size == 0)
        return (NULL);

    jump = sqrt(size);

    while (hold->next != NULL)
    {
        list = hold;

        for (i = 0; i < jump; i++)
        {
            hold = hold->next;
            if (hold->next == NULL)
                break;
        }

        printf("Value checked at index [%lu] = [%d]\n", hold->index, hold->n);

        if (hold->n >= value)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", list->index, hold->index);

    while (list != NULL && list != hold->next)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        if (list->n == value)
            return (list);
        list = list->next;
    }

    return (NULL);
}
