#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
	int i;
	unsigned long j = 0, k = 1, sum;
	unsigned long l, m, n, o;
	unsigned long p, q;

	for (i = 0; i < 92; i++)
	{
		sum = j + k;
		printf("%lu, ", sum);
		j = k;
		k = sum;
	}
	l = j / 10000000000;
	n = k / 10000000000;
	m = j % 10000000000;
	o = k % 10000000000;
	for (i = 93; i < 99; i++)
	{
		p = l + n;
		q = m + o;
		if (m + o > 9999999999)
		{
			p += 1;
			q %= 10000000000;
		}
		printf("%lu%lu", p, q);
		if (i != 98)
		{
			printf(", ");
		}
		l = n;
		m = o;
		n = p;
		o = q;
	}
	printf("\n");
	return (0);
}
