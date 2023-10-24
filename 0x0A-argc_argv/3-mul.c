#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int m, n1, n2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	m = n1 * n2;

	printf("%d\n", m);
	return (0);
}
