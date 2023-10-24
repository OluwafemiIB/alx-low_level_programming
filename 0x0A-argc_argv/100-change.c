#include "main.h"


/**
 * main - prints the minimum number of coins for change for an amount of money
 * @argc: argument count
 * @argv: argument vector, only one argument more beside program name
 * Return: least number of coins, 0 if negative amount, 1 if amount not given
 */

int main(int argc, char *argv[])
{
	int n, c = 0; /* n = number and c = coins */

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	n = atoi(argv[1]);

	c += n / 25;
	n = n % 25;
	c += n / 10;
	n = n % 10;
	c += n / 5;
	n = n % 5;
	c += n / 2;
	n = n % 2;
	c += n / 1;

	printf("%d\n", c);
	return (0);
}
