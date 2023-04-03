#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143.
  *
  * Return: Always 0 (Success).
  */

int main(void)
{
	long i, largestPrime;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			largestPrime = number / i;
		}
	}

	printf("%ld\n", largestPrime);

	return (0);
}
