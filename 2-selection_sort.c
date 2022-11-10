#include "sort.h"
/**
* swap_ints - swaps two integers in an array
* @x: the first integer to swap.
* @y: the second integer to swap.
*/
void swap_ints(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
* selection_sort - sorts array of integers in ascending order
* using the selection algorithm
* @array: array of integers
* @size: size of the array
*
* Description: print the array after each swap
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				swap_ints(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
}
