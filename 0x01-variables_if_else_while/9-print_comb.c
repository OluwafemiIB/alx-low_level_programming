#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int num; /*Decarling statement*/

	/*for 0-9 with (,)*/
	for (num = 48; num <= 57; num++)
	{
		putchar(num); /*print  number*/

		/*if the value is 9 in format ASCII break the program*/
		if (num == 57)
		{
			break;
		}

		putchar(','); /*print (,)*/
		putchar (' '); /*print a space*/
	}

	putchar('\n');

	return (0);
}
