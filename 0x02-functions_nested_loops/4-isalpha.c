#include "main.h"
/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 *
 *@c: The character to be checked
 * Return: 0 or 1.
 */

int _isalpha(int c)
{
	if (c >= 64 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
}
