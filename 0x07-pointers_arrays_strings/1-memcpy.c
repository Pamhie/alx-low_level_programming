#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: char array
 * @src: char array
 * @n: number of elements
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *yolo;

	yolo = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (yolo);
}
