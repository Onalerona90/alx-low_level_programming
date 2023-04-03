#include <stdio.h>

/**
 * main - Prints the sum of the even Fibonacci numbers.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
int i;
long j = 1, k = 2, sum = k;

for (i = 0; k + j < 4000000; i++)
{
k += j;
if (k % 2 == 0)
{
sum += k;
}
j = k - j;
}
printf("%ld\n", sum);

return (0);
}
