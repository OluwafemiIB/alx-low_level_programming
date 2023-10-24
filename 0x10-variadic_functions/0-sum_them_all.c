#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 *
 * Return: return the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int y;
	va_list b;

	va_start(b, n);

	for (x = 0, y = 0; x < n; x++)
	{
		y = y + va_arg(b, int);
	}
	return (y);
}
