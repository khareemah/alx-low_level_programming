#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: destination argument
* @src: source argument
* @n: most n byte from source
* Return: a string
*/

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i = 0;

	while (dest[destlen] != '\0')
{
	destlen++;
}
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[destlen + i] = src[i];

	return (dest);
}

