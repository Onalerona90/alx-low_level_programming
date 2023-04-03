#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar('0' + i % 10);
putchar('0' + j % 10);
if (i == 8)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
