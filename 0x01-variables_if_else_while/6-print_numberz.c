#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns all single digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i >= 0 && i <= 9)
		{
			putchar(i + '0');
		}
	i++;
	}
	putchar('\n');
	return (0);
}
