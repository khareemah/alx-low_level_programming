#include "main.h"
/**
* puts - prints every other caharcter of a string, starting with the first character
* @str: string as argument
* Return: a string
*/

void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
{
	if (i % 2 == 0)
{
	_putchar(str[i]);
}
}
	_putchar('\n');
}
