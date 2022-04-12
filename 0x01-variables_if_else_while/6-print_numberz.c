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
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
