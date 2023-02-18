#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns single digits numbers of base 10 numbers from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n <= 9)
		{
			putchar(n + '0');
		}
		n++;
	}
	putchar('\n');
	return (0);
}



