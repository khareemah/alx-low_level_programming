#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: pointer to a string
 * Return: nothing
 */

void print_rev(char *s)
{
	int length, i = 0;

	for (length = 0; s[length] != '\0'; length++)
	;
	for (i = length - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
