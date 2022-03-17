#include "main.h"
/**
*print_diagonal - prints diagonal
* @n: integer argument
* Return: Always (1);
*/

void print_diagonal(int n)
{
	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	int i;
	int j;
	int k;

	for (i = 0; i < n; i++)
{
	for (j = 0; j < 1; j++)
{
	for (k = 0; k < i + j; k++)
{
	_putchar(' ');
}
	 _putchar('\\');
}
	_putchar('\n');
}
}
}
