#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
	int x, y;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	x = 0;
	while (str1[x] != '\0') /*Declaring WHILE *s */
	{
		y = 0;
		while (str2[y] != '\0') /*Declaring WHILE *accept*/
		{
			if (str2[y] == str1[x]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			y++;    /*add y+1*/
		}

		if (s[x] != accept[y]) /*If aren't equals*/
		{
			break;
		}

		x++; /*add x+1*/
	}

	return (count); /*return the value of count*/
}
