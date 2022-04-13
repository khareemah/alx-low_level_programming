#include "function_pointers.h"

/**
* int_index - searches for an integer
* @size: size of array
* @cmp: pointer to a function used to compare values
* @array: arra y of elements
* Return: 1 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}
	return (-1);
}
