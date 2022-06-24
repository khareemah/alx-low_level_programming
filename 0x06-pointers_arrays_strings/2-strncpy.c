#include "main.h"
/**
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: numbers of characters
* Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != 0 && i < n; i++)
{
	dest[i] = src[i];
}
	dest[n] = '\0'; 

	return (dest);
}
