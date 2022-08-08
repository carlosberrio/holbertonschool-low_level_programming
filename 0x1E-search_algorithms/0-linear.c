#include "search_algos.h"

/**
 * @brief 
 * 
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
