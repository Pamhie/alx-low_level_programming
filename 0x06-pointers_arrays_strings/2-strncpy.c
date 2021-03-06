#include "main.h"

/**
 * _strncpy - conpy & concatenate two strings
 * @dest: char string
 * @src: char string
 * @n: number of chars
 * Return: pointer to resulting string `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
