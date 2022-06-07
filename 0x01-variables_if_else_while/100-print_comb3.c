#include <stdio.h>

/**
* main - print digits
* Return: 0
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j <= i)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 && i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
