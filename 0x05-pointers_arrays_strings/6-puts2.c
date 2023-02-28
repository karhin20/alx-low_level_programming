#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to print character
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *c = str;
	int o;

	while (*c != '\0')
	{
		c++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
