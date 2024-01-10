#include "sort.h"

/**
 * bubble_sort - This function sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: Array of unordered ints
 * @size: Size of the array
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{
    int swap = 1, tmp;
    size_t i;

    if (array == NULL || size <= 1)
	    return;
    while (swap == 1)
    {
        swap = 0;
        for (i = 1; i < size; i++)
        {
            if (array[i - 1] > array[i])
            {
                tmp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = tmp;
                swap = 1;
                print_array(array, size);
            }
        }
    }
}
