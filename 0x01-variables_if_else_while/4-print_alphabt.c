#include <stdio.h>
/**
* main: main function entry point
* Description: Get a random number and check its last digit, compare it with 5
* Return: 0
*/

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; alpha[i] != '\0'; i++)
{
	if (alpha[i] == 'q' || alpha[i] == 'e')
{
	continue;
}
	putchar(alpha[i]);
}
	putchar('\n');
	return (0);
}
