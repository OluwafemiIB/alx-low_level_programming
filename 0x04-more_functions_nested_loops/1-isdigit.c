#include "main.h"
/**
 *
 * _isdigit - if a number is a digit btw 0 to 9
 * @c: print int
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
