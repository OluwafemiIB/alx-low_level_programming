#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	/*Declarating statement*/
	char reverse_lower_c;

	/*for lower_c alphabet in reverse*/
	for (reverse_lower_c = 122; reverse_lower_c >= 97; reverse_lower_c--)
	{
		/*print reverse lower case alphabet*/
		putchar(reverse_lower_c);
	}

	/*new line*/
	putchar('\n');

	return (0);
}
