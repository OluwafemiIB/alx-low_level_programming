#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list b;
	char *s;

	va_start(b, n);

	for (x = 0; x < n; x++)
	{
		s = va_arg(b, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (x + 1 != n && separator)
			printf("%s", separator);
	}
	putchar(10);
	va_end(b);
}
