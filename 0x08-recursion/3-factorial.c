#include "main.h"
/**
 * factorial - return factorial of a number
 * @n: integer
 * Return: Always integer.
 */

int factorial(int n)
{
	if (n > 1)
{
	return (n * factorial(n - 1));
}
	if (n < 0)
{
	return (-1);
}
	return (1);
}
