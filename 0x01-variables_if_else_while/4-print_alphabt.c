#include <stdio.h>
/**
* main -  main function entry point
* Description: prints characters except q and e
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
