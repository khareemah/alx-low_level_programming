#include "main.h"

/**
 * *_strcpy - copies a string including the null to a buffer
 *
 * @dest: buffer
 * @src: Points to string
 *
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int srclen = _strlen(src);

	while (i <= srclen)
	{
		dest[i] = src[i];
		i++;
	}

	/**
	* while (src[i] != '\0')
	* {
	*	dest[i] = src[i];
	*	i++;
	* }
	* dest[i] = '\0';
	*/
	return (dest);
}

/**
* _strlen - return length of string
* @s: string
* Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
