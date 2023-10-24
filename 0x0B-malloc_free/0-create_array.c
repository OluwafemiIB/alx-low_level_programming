#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *y;
	unsigned int x;

	if (size == 0)
		return (NULL);

	y = (char *)malloc(sizeof(char) * size);

	if (y == NULL)
		return (0);

	for (x = 0; x < size; x++)
		*(y + x) = c;
	return (y);
}
