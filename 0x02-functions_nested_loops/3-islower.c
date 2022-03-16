#include "main.h"

/**
* _islower - Shore description, single line
* @c: parameter to be checked
* Return - on Success 1
* on error, -1 is returned amd errno is set appropriately
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
else
{
	return (c >= 97 && c <= 122);
}
}
