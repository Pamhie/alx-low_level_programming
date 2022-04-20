#include "main.h"
/**
* _strlen - check the code main.h
* @s: declaration of *s
* Return: Always 0.
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;

	return (c);
}
