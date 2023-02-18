#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns all possible combination of singl-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 0, num = 0;

	while (n < '0')
	{
		num = n + 1;

		while (num < 10)
		{
			putchar(n + '0');
			putchar(num + '0');
			if (n == 8 && num == 9)
			{
				break;
			}

			putchar(',');
			putchar(' ');
			num++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

