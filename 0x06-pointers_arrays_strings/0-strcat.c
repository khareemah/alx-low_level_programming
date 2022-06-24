#include "main.h"
/**
* _strcat -  concatenates two strings
* @dest: destination string
* @src: source string
* Return: a string
*/

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int i = 0;

	while (dest[destlen] != '\0')
		destlen++;

	for (i = 0; src[i] != '\0'; i++)
{
	dest[destlen + i] = src[i];
}
	return (dest);
}
