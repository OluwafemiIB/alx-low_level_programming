#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int y;

	if (argc > 0)
	{
		for (y = 0; y < argc; y++)
		{
			printf("%s\n", argv[y]);
		}
	}
	return (0);
}
