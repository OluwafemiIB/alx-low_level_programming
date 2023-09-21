#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
	int *start_x, *end_x, x;
	int y;

	/*Start_x and end_x is equal value of variable s*/
	start_x = a;
	end_x = a;

	/*Move the end_c to the last character*/
	for (y = 0; y < n - 1; y++)
	{
		end_x++;
	}

	/* Swap the char from start and end */
	/* index using begin_ptr and end_ptr */
	for (y = 0; y < n / 2; y++)
	{

		/*swap character*/
		x = *end_x;
		*end_x = *start_x;
		*start_x = x;

		/*update pointers positions*/
		start_x++;
		end_x--;
	}

}
