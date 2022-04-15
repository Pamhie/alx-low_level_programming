#include "main.h"

/**
* Return 1 otherwise 0
* 1 if uppercase
* 0 if lowercase
* @c: the character to be checked
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
