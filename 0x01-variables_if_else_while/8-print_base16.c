#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns all the numbers of base 16 in lowercase
 *
 * Returns: Always 0
 */

int main(void)
{
	char i = '0';
	char c = 'a'

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
