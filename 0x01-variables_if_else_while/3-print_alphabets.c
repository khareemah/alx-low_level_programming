#include <stdio.h>

/**
* main - main function
* Description: prints uppercase and lowercase alpha
* Return: 0
*/

int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
{
	putchar(ch[i]);
}
	putchar('\n');
	return (0);
}
