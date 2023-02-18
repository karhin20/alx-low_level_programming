#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns lowercase alphabets in reverse order
 *
 * Return: Always 0
 */

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);

	alph--;
	}
	putchar('\n');
	return (0);
}
