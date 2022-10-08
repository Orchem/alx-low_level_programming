#include "search_algos.h"

/**
 * linear_search - search the value of an array using linear search algorithm
 *
 * @array: pointer to first element in the array
 * @size: number of elements in the array
 * @value: the integer to search for
 *
 * Return: index of value if found and -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
