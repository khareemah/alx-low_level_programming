#include "main.h"

/**
* main - main function
* Return: 0
*/

int main(void)
{
	char str[] = "putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
