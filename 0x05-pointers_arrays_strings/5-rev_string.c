#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string
 * Return: nothing
 */
int _strlen(char *s);

void rev_string(char *s)
{
	int i, len;
	char temp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

/**
 * _strlen - returns the length of a string
 *
 * @s: the string whose length to return
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	return (i);
}
