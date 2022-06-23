#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string
 * Return: nothing
 */

void rev_string(char *s)
{
	int strlen, temp, i;

	strlen = _strlen(s);

	for (i = 0; i < strlen / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + strlen - i - 1);
		*(s + stren - i - 1) = temp;
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
