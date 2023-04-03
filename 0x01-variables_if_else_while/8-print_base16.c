#include <stdio.h>

/**
 * main - Prints base 16 hexidecimal in lowercase.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
int in;
char il;

for (in = 0; in < 10; in++)
{
putchar('0' + in);
}
for (il = 'a'; il <= 'f'; il++)
{
putchar(il);
}
putchar('\n');

return (0);
}
