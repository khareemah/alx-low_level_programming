#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: pointer to a string
 * Return: nothing
 */


void print_rev(char *s)
{
	int length = _strlen(s);

	while (length > 0)
	{
		_putchar(*(s + (length - 1)));
		length--;
	}
	_putchar('\n');
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
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
