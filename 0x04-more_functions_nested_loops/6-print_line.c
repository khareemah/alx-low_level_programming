#include "main.h"
/**
* print_line - print line in terminal
* @c: integer argument
* Return: Always 0.
*/

void print_line(int n)
{
	if (n <= 0)
{
	_putchar(' ');
	_putchar('\n');
}
	else
{
	int i;

	for (i = 0; i < n; i++)
{
	_putchar('_');
}
	_putchar('\n');

}
}
