#include "main.h"
/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 *
 *@c: The int to print
 * Return: Always 0.
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
