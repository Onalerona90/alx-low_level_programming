#include <stdio.h>

/**
 * main - Prints A to Z in lowercase the Uppercase.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
char il;
char iu;

for (il = 'a'; il <= 'z'; il++)
{
putchar(il);
}
for (iu = 'A'; iu <= 'Z'; iu++)
{
putchar(iu);
}
putchar('\n');

return (0);
}
