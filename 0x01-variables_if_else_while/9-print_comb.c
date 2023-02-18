#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns all possible combination of singl-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	return (0);
}
