#include <stdio.h>
/**
* main - entry point
* Description: print alphabets in reverse order
* Return: 0
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
	putchar('\n');
	return (0);
}
