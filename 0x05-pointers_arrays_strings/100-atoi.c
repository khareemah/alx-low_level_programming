#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *
 *Return: The integer value of the comverted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int ans = 0;

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] >= '0' && s[i] <= '9')
			ans = (ans * 10) + (s[i] - '0');
		else if (ans > 0)
			break;
	}
	return (ans * sign);
}
