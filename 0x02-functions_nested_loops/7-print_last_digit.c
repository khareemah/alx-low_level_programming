#include "main.h"
/**
 * print_last_digit - check the code
 * @c: value to be checked
 * Return: Always 0.
 */

int print_last_digit(int c)
{
	int last_digit;

	if (c > 0)
{
	last_digit = c % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
	else
{
	last_digit = (-1 * (c % 10));
	_putchar('0' + last_digit);
	return (last_digit);

}
}
