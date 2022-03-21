#include "main.h"
/**
* puts_half - prints second half of a string
* @str: string parameter
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
{
	i++;
}
	for (j = i / 2; str[j] != '\0'; j++)
{
	_putchar(str[j]);
}
	_putchar('\n');
}
