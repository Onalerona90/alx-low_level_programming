#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: Destinaion.
 * @src: Source.
 *
 * Return: dest.
*/

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
		/**
		 * Do nothing...
		*/
	}

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

