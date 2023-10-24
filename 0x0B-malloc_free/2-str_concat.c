#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, l1, l2;
	char *y;

	for (l1 = 0; s1 && *(s1 + l1) != 0; l1++)
	{}
	for (l2 = 0; s2 && *(s2 + l2) != 0; l2++)
	{}

	y = malloc(sizeof(char) * (l1 + l2 + 1));

	if (y == NULL)
		return (NULL);

	for (a = 0; a < l1; a++)
		*(y + a) = *(s1 + a);

	for (b = 0; b < l2; b++)
		*(y + a + b) = *(s2 + b);

	*(y + a + b) = 0;

	return (y);
}
