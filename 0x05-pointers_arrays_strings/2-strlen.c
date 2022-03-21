#include "main.h"
/**
* _strlen - returns the lenght if a string
* @s: string parameter
* Return: lenght of a string
*/

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; ++i)
;
	return (i);
}
