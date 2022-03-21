#include "main.h"
/**
* rev_string - reverse string
* @s: string parameter
* Return: void
*/

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
{
	_putchar(s[i]);
}
}
