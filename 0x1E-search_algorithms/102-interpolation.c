#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= h && value >= array[l] && value <= array[h])
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		if (pos < size)
		{
			printf("Value checked array [%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] > value)
			h = pos - 1;
		else
			l = pos + 1;
	}

	return (-1);
}
