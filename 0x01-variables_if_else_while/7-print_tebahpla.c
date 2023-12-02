#include <stdio.h>
/**
 * main - entry point
 * Description: print lowercase in resever
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar ('\n');
	return (0);
}
