#include "main.h"
#include <stdio.h>
/**
 * prints absolute value
 * Return: 0 or. 1
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
