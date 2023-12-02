#include <stdio.h>
/**
 * main - entry point
 * Description: prints digit numbers
 * Return: 0
 */
int main(void)
{
	int s = 0;
	int k;

	for (s = 0; s <= 9; s++)
	{
		k = 0;
	while (k <= 9)
	{
	if (s != k && s < k)
	{
	putchar(s + 48);
	putchar(k + 48);
	if (s + k != 17)
	{
		putchar(',');
		putchar(' ');
	}
	}
	k++;
	}
	}
	putchar('\n');
	return (0);
}
