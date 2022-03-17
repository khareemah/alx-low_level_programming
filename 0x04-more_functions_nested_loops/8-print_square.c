#include "main.h"
/**
* print_square - print square
* @size: argumemt
* Return: Always 0.
*/
void print_square(int size)
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
	for (j = 0; j < 1; j++)
{
	for (k = 0; k < size; k++)
{
	_putchar('#');
}
}
{
	_putchar('\n');
}
}
}
}
