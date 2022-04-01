#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two digits
* @argc: argument count
* @argv: argument array
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc <= 2)
{
	printf("Error\n");
}
	else
{

	for (i = 1; i < argc; i++)
{
	product = product * atoi(argv[i]);
}
	printf("%d\n", product);
}
	return (0);
}
