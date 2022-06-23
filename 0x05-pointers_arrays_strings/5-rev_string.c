#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len, i;
	char temp;

	len = _strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = temp;
	}
}


/**
* _strlen - return lenght of string
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
