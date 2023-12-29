#include "main.h"
#include <stdio.h>
/**
 * main - computes the absolute value of an integer.
 * Return: 0
 */
int _abs(int n)
{

	_putchar(n);

	if (n < 0)
	{
		n = (n * -1);
		_putchar(n);
	}
	return(0);
}
