#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: the first string
 * @s2: the string to add to @s1
 *
 * Return: a pointer that points to a newly allocated space which
 * contains the contents of @s1, followed by the contents of @s2,
 * and null terminated. Should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int _s1len;
	int _s2len;
	int total_char;
	int i;
	int j;
	char *new_str;

	_s1len = 0;
	while(s1[_s1len])
		_s1len++;

	_s2len = 0;
	while(s2[_s2len])
		_s2len++;

	total_char = _s1len + _s2len + 1;
	new_str = malloc(sizeof(char) * total_char);
	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (i < _s1len)
	{
		new_str[i] = s1[i];
		i++;
	}

	j = 0;
	while ( j < _s2len)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[total_char] = '\0';

	return (new_str);
}
