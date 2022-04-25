#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string
 * @src: char string
 * @n: number of elements
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, c;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
