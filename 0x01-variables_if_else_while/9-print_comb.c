#include <stdio.h>
/**
* main - entry point
* Description: Posible combination of an integer
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
{
	putchar(i + '0');
	if (i != 9)
{
	putchar(',');
	putchar(' ');
}

}
	putchar('\n');
	return (0);
}
