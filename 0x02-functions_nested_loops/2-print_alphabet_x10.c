#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int l_a;
	int count;

	count = 0;
	while (count <= 9)
	{
		for (l_a = 'a'; l_a <= 'z'; l_a++)
		{
			_putchar(l_a);
		}
		count++;
		_putchar('\n');
	}
}
