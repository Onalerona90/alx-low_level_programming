#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to prints.
*/

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		_putchar('-');
	}

	i /= 10;

	if (i != 0)
	{
		print_number(i);
	}

	_putchar((unsigned int) n % 10 + '0');

}
