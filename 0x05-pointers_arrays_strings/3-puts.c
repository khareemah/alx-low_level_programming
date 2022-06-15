#include "main.h"

/**
 * _puts - print string to standard output
 * @str: a pointer to a string
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
