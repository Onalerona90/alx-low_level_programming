#include "main.h"

/**
 * _strncat - Concatenate two strings.
 * @dest: Destination
 * @src: Source.
 * @n: Number of elements to concatenate.
 *
 * Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		/**
		 * Do nothing...
		*/
	}

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
