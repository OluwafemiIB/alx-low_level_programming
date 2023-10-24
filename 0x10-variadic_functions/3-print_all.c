#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *separator = "";

	va_list y;

	va_start(y, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
			case 'c':
				printf("%s%c", separator, va_arg(y, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(y, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(y, double));
				break;
			case 's':
				s = va_arg(y, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				x++;
				continue;
			}
			separator = ", ";
			x++;
		}
	}
	putchar(10);
	va_end(y);
}
