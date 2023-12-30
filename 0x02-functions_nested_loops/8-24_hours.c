#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int v;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 3; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				v = 0;
				while (v <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(v + '0');
					_putchar('\n');
					v++;
				}
			}
		}
	}
	_putchar('\n');
}
