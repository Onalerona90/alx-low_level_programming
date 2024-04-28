#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: destination.
 * @src: source.
 *
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		*(dest + i) = *(src + i);

		if (*(src + i) == '\0')
		{
			break;
		}
	}
	return (dest);
}

