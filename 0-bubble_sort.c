#include "sort.h"
/**
* swap_int: swaps two integers in an array
* @w: first integer
* @x: second integer
*/
void swap_int(int *w, int *x)
{
	int temp;

	temp = *w;
	*w = *x;
	*x = temp;
}

/**
* bubble_sort: sorts an array of integers in ascending order.
* @array: array integers to sort.
* @size: size of the array to sort
*
* Description: prints the array after each swap
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;

	len = size;
	bool bubbly = false;


	if (array == NULL || size < 2)
		return;
	while (bubbly == false)
	{
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
