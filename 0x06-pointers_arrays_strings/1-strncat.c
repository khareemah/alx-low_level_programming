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
	int l1 = 0;
	int l2 = n;
	int i = 0;

	while (dest[l1] != '\0')
{
	l1++;
}
	for (i = 0; i < l2 && src[i] != '\0'; i++)
{
	dest[l1 + i] = src[i];
}
	return (dest);
}

