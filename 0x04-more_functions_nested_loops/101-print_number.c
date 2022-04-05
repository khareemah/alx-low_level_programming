#include "main.h"

/**
 * print_number - print number
 * @n: parameter
 * Return: void.
 */

void print_number(int n)
{
	char num[] = n;
	int c = 0;

	while (num[c] != '\0')
{
	putchar(num[c]);
	c++;
}
	putchar('\n');
}
