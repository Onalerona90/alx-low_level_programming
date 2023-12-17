#include "search_algos.h"

/**
 * jump_search - Search for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
*/

int jump_search(int *array, size_t size, int value)
{

	size_t jump = (size_t)sqrt(size),
	i, next;

	if (array == NULL || size == 0)
		return (-1);

	for (i = next = 0; next < size && array[next] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", next, array[next]);
		i = next;
		next += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, next);

	next = (next > size - 1) ? next : size - 1;

	if (value > array[i])
		return (-1);

	for (; i < next && array[i] < value; i++)
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? i : -1);
}
