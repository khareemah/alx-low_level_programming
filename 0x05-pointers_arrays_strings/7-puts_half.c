#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len / 2) + 1; i < len; i++)
			_putchar(str[i]); 
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
