#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - Searchs a string for any of a set of bytes.
 * @s: The string.
 * @accept: The bytes.
 *
 * Return: A pointer to the byte in s or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}

	return (NULL);
}
