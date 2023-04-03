#include "main.h"

/**
 * print_triangle - Draws a triangle.
 * @size: Number of times the "#" is printed.
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(' ');
			}

			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
