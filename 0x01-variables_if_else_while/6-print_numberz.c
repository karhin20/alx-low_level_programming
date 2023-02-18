#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns all single digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

		putchar('\n');
	return (0);
}
