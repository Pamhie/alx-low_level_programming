#include "main.h"

/**
* main - print _
* @n number of times _ is printed
* followed by new line
*/

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
