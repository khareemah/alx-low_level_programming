#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* @array: array parameter
* @size: size of the array
* @action: function to execute
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*p)(int);

	p = action;
	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		p(array[i]);
}
