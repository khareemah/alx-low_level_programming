#include "main.h"
/**
* _isdigit - isdigit function returns 0 or 1
* @c: digit to be checked
* Return: Always 0.
*/

int _isdigit(int c)
{
	if (c >= 48 &&  c <= 57)
{
	return (1);
}
	else
{
	return (0);
}
}
