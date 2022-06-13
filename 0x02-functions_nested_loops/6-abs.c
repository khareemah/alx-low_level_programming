#include "main.h"

/**
* _abs - computes absolute value of an integer
* @a: integer
* Return: returns absolute value of integer
*/

int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
