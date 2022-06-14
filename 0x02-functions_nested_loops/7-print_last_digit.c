#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: integer to print
 * Return: value of integer
 */

int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (i < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
