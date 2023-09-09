#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char norlcbase_16; /*Decarling statement*/

	/*for base 16 0-9*/
	for (norlcbase_16 = 48; norlcbase_16 <= 57; norlcbase_16++)
	{
		putchar(norlcbase_16); /*print 0-9*/
	}

	/*for base 16 a-f*/
	for (norlcbase_16 = 97 ; norlcbase_16 <= 102; norlcbase_16++)
	{
		putchar(norlcbase_16); /*print a-f*/
	}

	putchar ('\n'); /*print new line*/

	return (0);
}
