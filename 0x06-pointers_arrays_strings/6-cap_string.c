#include "main.h"

/**
 * separator - checks and ensure that all string is capitalized
 * @c: character to be checked
 * Return: if separator return 1. Otherwise return 0;
 */

int separator(char c)
{
switch (c)
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
return (1);

default:
return (0);
}
}

/**
* cap_string - capitalize all words in a string
* @str: string pointer
* Return: a string
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
{
	if (str[i] >= 'a' && str[i] <= 'z')
{
	if (str[i] == *str || separator(str[i - 1]))
{
	str[i] -= 32;
}
}
}
	return (str);
}
