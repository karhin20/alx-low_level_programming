#include "main.h"
/**
 * print_line - drwas a straight line
 * @n: number of _ to print
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
	return (0);
}
