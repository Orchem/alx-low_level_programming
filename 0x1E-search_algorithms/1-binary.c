#include <math.h>
#include "search_algos.h"

/**
 * binary_search - search the value of an array using binary search algorithm
 *
 * @array: pointer to first element in the array
 * @size: number of elements in the array
 * @value: the integer to search for
 *
 * Return: index of value if found and -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int i;
	unsigned long int L;
	unsigned long int R;
	unsigned long int m;

	L = 0;
	R = size - 1;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i != R)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		m = (L + R) / 2;

		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
