#include "main.h"
/**
* *_strcpy - copy a string to a buffer
* @dest: first parameter
* @src: second parameter
* Description: Copy the string pointed to by pointer `src` to
* the buffer pointed to by `dest`
* Return: character
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
	i++;
	dest[i] = src[i];
}
	while (src[i] != '\0');

	return (dest);
}
