#include <stdio.h>

/**
 * main - Computes and prints the sum multiples of specific no.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
int i, sum;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);

return (0);
}
