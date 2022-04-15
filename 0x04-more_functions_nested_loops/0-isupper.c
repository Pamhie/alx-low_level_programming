#include "main.h"
#include <stdio.h>

/**
* Return 1 otherwise 0
*
* 1 if uppercase and 0 if lowercase
*
* @c: the character to be checked
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
