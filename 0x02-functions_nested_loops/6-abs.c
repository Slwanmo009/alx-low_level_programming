#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer.
 * @n: takes in integer type input for funcation
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
