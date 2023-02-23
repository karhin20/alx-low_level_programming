#include "main h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: variable to be checked
 *
 * Return: 1 for  uppercase
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
