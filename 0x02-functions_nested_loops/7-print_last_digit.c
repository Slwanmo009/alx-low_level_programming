#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 * @n: takes number input
 * Return: 0.
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
		r = r * (-1);

	_putchar(r + '0');
	return (r);
}
