#include "main.h"
/**
* rev_string - reverse string
* @s: string parameter
* Return: void
*/

void rev_string(char *s)
{
	
	int i = 0;

	while (s[i] != '\0')
{
	i++;
}
	while (i--)
{
	_putchar(s[i]);
}
	_putchar('\n');
}
