#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: The character checked.
 *
 * Return: 1 if c is uppercase and 0 otherwise.
*/

int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}

	return (0);

}
