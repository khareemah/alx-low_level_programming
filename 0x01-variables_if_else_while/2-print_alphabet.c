#include <stdio.h>

/**
* main - main block
* Description: Prints alphabets in lower case
* Return: 0
*/

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alpha[i] != '\0')
{
	putchar(alpha[i]);
	i++;
}
	putchar('\n');
	return (0);
}
