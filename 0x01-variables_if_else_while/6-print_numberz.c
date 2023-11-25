#include <stdio.h>
/**
 * main - entry point
 * Description: print all single digit number
 * Return: Always 0
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
