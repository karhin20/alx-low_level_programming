#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program prints alphabet in lowercase on a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		putchar (alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
