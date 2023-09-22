#include "main.h"
/**
 * rot13 - convert to rot 13
 * @str: input string
 * Return: String conversion
 */
char *rot13(char *str)
{
	int count = 0, a;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[count] != '\0')
	{
		a = 0;
		while (letters[a] != '\0')
		{
			if (str[count] == letters[a])
			{
				str[count] = rot13[a];
				break;
			}
			a++;
		}
		count++;
	}
	return (str);
}
