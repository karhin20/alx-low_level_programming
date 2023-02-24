#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
int i, a;

	if (n <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (i = 0; i < 0; i++)
		{
		for (a = 0; a < 0; a++)
		{
			if (a == i)
				_putchar('\\');
			else if (a < i)
				_putchar(' ');
		}
		_putchar('\n');
		}
	}
}
