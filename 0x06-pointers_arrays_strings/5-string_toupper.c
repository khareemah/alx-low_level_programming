#include "main.h"
/**
* string_toupper - convert string to uppercase
* @str: pointer string
* Return: string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
{
	if (str[i] >= 'a' && str[i] <= 'z')
{
	str[i] = str[i] - 32;
}
	i++;
}
	return (str);
}
