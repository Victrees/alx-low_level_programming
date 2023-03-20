#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 16 ; n++)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			putchar(87 + n);
		}
	}
	putchar('\n');
	return (0);
}
