#include "main.h"

/**
 * print_line - Draws a straight line.
 * @n: Number of times the line is printed.
*/

void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
