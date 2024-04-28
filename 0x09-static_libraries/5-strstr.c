#include <stdlib.h>
#include "main.h"

/**
* _strstr - Locates a substring.
* @haystack: The longer string.
* @needle: The substring.
*
* Return: A pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	for (; needle[s] != '\0'; s++)
	{
		/* Do nothing... */
	}

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != s)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (NULL);
}

