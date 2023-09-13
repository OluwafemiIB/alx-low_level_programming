#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main(void)
{
	/*Declaring statements*/
	long int num;
	long int num_1 = 0;
	long int num_2 = 1;
	long int nextTerm;

	for (num = 0; num < 50; ++num) /*Start for*/
	{
		nextTerm = num_1 + num_2;
		num_1 = num_2;
		num_2 = nextTerm;

		if (num != 49)
		{
			printf("%ld, ", nextTerm);
		}

		else
		{
			printf("%ld\n", nextTerm);
		}

	} /*End for*/

	return (0);
}
