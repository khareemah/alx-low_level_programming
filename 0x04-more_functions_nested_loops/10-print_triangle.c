#include "main.h"
/**
* print_traingle - prints a triangle
* @size: parameter
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

	for (i = 1; i <= size; i++)
{
	for (j = 0; j < size; j++)
{
	if(i + j < size)
{
	_putchar(' ');
}
	else
{
	_putchar('#');
}
}
	_putchar('\n');	
}
	_putchar('\n');
}
}
