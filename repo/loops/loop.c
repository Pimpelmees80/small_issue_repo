#include <stddef.h>

void demo(int *arr, int size, int limit)
{
    /* parameter direct */
    for (int i = 0; i < size; i++)
    {
    }

    /* parameter in expressie */
    for (int i = 0; i < size && i < limit; i++)
    {
    }

    /* afgeleide variabele */
    int max = size;

    for (int i = 0; i < max; i++)
    {
    }

    /* geen parameter */
    for (int i = 0; i < 100; i++)
    {
    }

    while (size > 0)
    {
        size--;
    }

    do
    {
        limit--;
    } while (limit > 0);
}