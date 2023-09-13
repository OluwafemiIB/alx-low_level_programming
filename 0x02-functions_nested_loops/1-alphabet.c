#include "main.h"

/**
 * print_alphabet - Print the lowercase alphabet
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char lower_c; /*Declaration Statement*/

	for (lower_c = 'a'; lower_c <= 'z'; lower_c++) /*for loop starting point*/
	{
		_putchar(lower_c);
	} /*End of the for loop*/

	_putchar('\n');/*new line*/
}
