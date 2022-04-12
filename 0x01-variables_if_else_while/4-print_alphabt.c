#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main code
 * Description: Print state of a random number as
 * positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
