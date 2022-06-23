#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: pointer to a string
 * Return: nothing
 */

int _strlen(char *s);

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


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
