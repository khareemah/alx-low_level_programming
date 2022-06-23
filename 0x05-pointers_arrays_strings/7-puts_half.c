#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; i++)
	;

	for (i = len / 2; str[i] != '/0'; i++)
		_putchar(str[i]);
}
