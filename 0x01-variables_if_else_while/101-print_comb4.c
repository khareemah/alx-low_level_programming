#include <stdio.h>
/**
* main - main function
* Return: 0
*/

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
{
	for (j = (i + 1); j < 58; j++)
	{
		for (k = (j + 1); j < 58; k++)
		{
			putchar(i);
			putchar(j);
			putchar(k);
			putchar(',');
			putchar(' ');
		}
	}
}	
	putchar('\n');
	return (0);
}
