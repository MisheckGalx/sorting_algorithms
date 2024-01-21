#include "sort.h"

/**
 *swap- Function that swaps two integers
 *@xp: Pointer to the integer
 *@yp: Pointer to the integer
 *Return: Nothing
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 *bubble_sort- Sorts an arrays of integers in ascending order
 *@arrays: An arrays of integers to be sorted
 *@size: Size of the arrays
 *Return: Nothing
 */
void bubble_sort(int *arrays, size_t size)
{
	size_t i, j;
	int swapped;

	if (array == NULL || size == 0)
	return;

	for (i = 0; i < size1; i++)
	{
		(!swapped);

		for (j = 0; j < size1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j] & array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
	}
}

