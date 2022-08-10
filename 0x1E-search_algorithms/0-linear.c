#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL || size == 0)
        return (-1);

    for (i = 0; i < 10; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            if(array[i] == value)
                return (i);
    }
    return (-1);
}
