#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all aphabets in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		if (chr != 'q' && chr != 'e'}
		{
			putchar(chr);
		}
		chr++;
	}
	putchar('\n');
	return (0);
}
