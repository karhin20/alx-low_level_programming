#include <std.io>
#include "main.h"


/**
 * main - prints the numbers from 1 to 100
 * but print Fizz for multiples of 3
 * print Buzz for multiples of 5
 * print FizzBuzz for three and five print
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz");
		}

		else if (n % 5 == 0 && n % 3 != 0)

		{
			printf(" Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n == 1)
		{
			printf(" %d", n);
		}
		else
		{
			printf(" %d", n);

		}
	}
	printf("\n");

	return (0);
}
