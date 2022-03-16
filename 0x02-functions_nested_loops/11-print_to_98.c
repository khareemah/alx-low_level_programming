#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0.
 */

void print_to_98(int n)
{
	for (n = 0; n < 98; n++)
{
	printf("%i, ", n);
}
	for (n = n; n > 98; n--)
{
	printf("%i, ", n);
}
	printf("98");
	putchar('\n');
}
