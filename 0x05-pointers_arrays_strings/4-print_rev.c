#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int a;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (a = len; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
