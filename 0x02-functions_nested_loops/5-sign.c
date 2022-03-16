#include "main.h"

/**
* print_sign - print sign of a number
* Return: Always 0, 1 or -1.
* @n: number to be checked
*/

int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}

