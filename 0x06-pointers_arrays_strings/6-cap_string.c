#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */

char *cap_string(char *s)

{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
	if (*(s + i) >= 'a' && *(s + i) <= 'z')
		*(s + i) -= 'a' - 'A';
	}
	{
	if (i == 0)
	else
	{
	for (j = 0; j <= 12; j++)
	{
	if (a[j] == *(s + i - 1))
		*(s + i) -= 'a' - 'A';
	}
	}

	{
		i++;
	}

	return (s);

}
