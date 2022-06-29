#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string to copy
 *
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */


char *_strdup(char *str)
{
	int _strlen;
	int i;
	char *new_str;

	_strlen = 0;
	while (str[_strlen] != '\0')
		_strlen++;

	new_str = malloc(sizeof(char) * (_strlen + 1));
	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (i <= _strlen)
	{
		new_str[i] = str[i];
		i++;
	}

	return (new_str);
}
