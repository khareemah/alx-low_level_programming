#include "main.h"
/**
 * main - check the code
 * @c: value to be checked
 * Return: Always 0.
 */

int print_last_digit(int c)
{	
	if (c > 0)
	{
	return (c % 10);
}
	else if (c < 0)
{
	return (-1 * (c % 10));
}
	else
{
	return (c);
}
}
