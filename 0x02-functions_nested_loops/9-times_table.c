#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0.
* Return: Always ).
*/

void  times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
{
	for (j = 0; j < 9; j++)
{
	int prod = i * j;

	_putchar(prod);
}
}
}
