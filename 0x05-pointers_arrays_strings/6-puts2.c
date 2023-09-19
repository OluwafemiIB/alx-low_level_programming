#include "main.h"

/**
 *puts2 - prints every other character of a string,
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */

void puts2(char *str)
{
	int x; /*Declaring variables*/

	for (x = 0; str[x] != '\0'; x++) /*Star FOR*/
	{
		if (x % 2 == 0)
		_putchar (str[x]); /*display contents*/
	} /*END FOR*/

	_putchar ('\n');
}
