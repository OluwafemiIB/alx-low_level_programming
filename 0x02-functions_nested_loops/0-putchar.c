#include "main.h"

/**
 * main - A program that prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int x; /*Declaration statement*/

	char string[8] = "_putchar"; /*Arrays*/

	for (x = 0; x < 8; x++) /*Starting for loop statement*/
	{
		_putchar(string[x]); /*Displaying word*/
	} /*End of for loop statement*/

	_putchar ('\n');

	return (0);
}
