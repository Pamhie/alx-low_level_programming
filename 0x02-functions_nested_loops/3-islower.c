#include "main.h"

/**
 * check lower case letters
 * Return: 0 or. 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
