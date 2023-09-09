#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	/*Declaring statements*/
	char lower_c_l;

	/*for lower_c_l*/
	for (lower_c_l = 'a'; lower_c_l <= 'z'; lower_c_l++)
	{
		/*continue if lower_c_l is q*/
		if (lower_c_l == 'q')
			continue;

		/*continue if lower_c_l is e*/
		else if (lower_c_l == 'e')
			continue;

		/*print lower_c_l*/
		putchar(lower_c_l);
	}

	/*new line*/
	putchar ('\n');

	return (0);
}
