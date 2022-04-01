#include <stdio.h>

/**
 * main - print first argument
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
