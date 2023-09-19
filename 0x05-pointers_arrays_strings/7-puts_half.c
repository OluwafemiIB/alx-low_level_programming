#include "main.h"

/**
 *puts_half - prints every other character of a string,
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */

void puts_half(char *str)

{
	int x, last;

	x = 0;
	while (str[x] != '\0') /*Count character of string*/
	{
		x++;
	}

	last = (x + 1) / 2; /*divide 2 the variable i */

	for (x = last; str[x]; x++) /*Start FOR*/
	{
		_putchar (str[x]);
	} /*End FOR*/

	_putchar ('\n');

}
