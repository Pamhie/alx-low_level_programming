#include "main.h"

/**
 * if character is an alphabetic character.
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
