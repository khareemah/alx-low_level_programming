#include "function_pointers.h"

/**
* print_name - function that print names
* @name: pointer to strinng
* @f: pointer that points to a function
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
