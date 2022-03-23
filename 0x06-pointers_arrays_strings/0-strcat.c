#include "main.h"
/**
* _strcat -  concatenates two strings
* @dest: destination string
* @src: source string
* Return: a string
*/

char *_strcat(char *dest, char *src)
{
	int l1 = 0;
	int l2 = 0;
	int i = 0;

	while (dest[l1] != '\0')
{
	l1++;
}
	while (src[l2] != '\0')
{
	l2++;
}
	for (i = 0; i < l2; i++)
{
	dest[l1 + i] = src[i];
}
	return dest;
}
