#include <stdio.h>
/**
* main - entry point
* Description: print hexadecimal digits
* Return: 0
*/

int main(void)
{
	char *hex = "0123456789abcdef";
	int i = 0;

	while (hex[i] != '\0')
{
	putchar(hex[i]);
	i++;
}
	putchar('\n');
	return (0);
}
