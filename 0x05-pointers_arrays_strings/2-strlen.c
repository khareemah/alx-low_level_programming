#include "main.h"
/**
* _strlen - returns the lenght if a string
* @s: string parameter
* Return: lenght of a string
*/

int _strlen(char *s)
{
	int i;
	while (s[i])
	i++;
	return (i);
}
