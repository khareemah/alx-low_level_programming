#include "main.h"

/**
 * main - check the code
 * @a: first integer
 * @b: second integer
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
