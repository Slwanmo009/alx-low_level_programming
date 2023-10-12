#include "main.h"
/**
 * print_most_number print - print num except 2 and 4
 * return: void
 */
void print_most_numbers(void)
{
	char c;
	for (c = 'o'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
