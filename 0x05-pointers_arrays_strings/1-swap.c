#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Value 1.
 * @b: Value 2.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
