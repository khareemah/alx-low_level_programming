#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an arrat of chars and initialize with specific char
* @size: size of array
* @c: charater to initialize array with
* Return: pointr to array or NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (size)
		{
			str[i] = c;
			i++;
		}
	}
	return (str);
}
