#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)

{
	/*Declaring statement*/
	char lower_c;
	char upper_c;

	/*for lower case alphabet*/
	for (lower_c = 'a'; lower_c <= 'z'; lower_c++)
	{
		putchar(lower_c);
	}

	for (upper_c = 'A'; upper_c <= 'Z'; upper_c++)
	{
		putchar(upper_c);
	}

	/*new line*/
	putchar ('\n');

	return (0);
}
