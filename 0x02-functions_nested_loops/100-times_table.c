#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: Number of times.
*/

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				k = i * j;

				_putchar(',');
				_putchar(' ');

				if (k <= 99)
				{
					_putchar(' ');
				}

				if (k <= 9)
				{
					_putchar(' ');
				}

				if (k >= 100)
				{
					_putchar('0' + k / 100);
					_putchar('0' + (k / 10) % 10);
				}
				else if (k >= 10 && k <= 99)
				{
					_putchar('0' + k / 10);
				}
				_putchar('0' + k % 10);
			}
			_putchar('\n');
		}
	}
}
