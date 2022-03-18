#include "main.h"
/**
* print_triangle - prints a triangle
* @size: parameter
* Return: Always 1
*/

void print_triangle(int size)
{
	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
{
	for (k = 0; k < 1; k++)
{
	for (j = size; j >= 0; j--)
{
	if (j > i + k)
{
	_putchar(' ');
}
	else
{
	_putchar('#');
}
}
}
	_putchar('\n');
}
	_putchar('\n');
}
}
