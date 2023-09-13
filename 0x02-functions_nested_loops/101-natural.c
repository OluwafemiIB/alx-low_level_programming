#include <stdio.h>
/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 */

int main(void)
{
	int x, result; /*Delcaring statements*/

	x = 0;
	result = 0;
	/*Start While*/
	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0) /*Start condition IF*/
			result += x;
		x++;
	} /*END condition IF*/

	printf("%d\n", result);
	return (0);
}
