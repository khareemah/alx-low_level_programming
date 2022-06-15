#include "main.h"

/**
 * _strlen - return length of a string
 * @s: pointer to a string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	;

	return (i);
}
