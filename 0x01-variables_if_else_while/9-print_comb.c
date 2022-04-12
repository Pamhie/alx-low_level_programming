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
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
