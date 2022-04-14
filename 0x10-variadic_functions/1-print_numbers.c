#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
{
	if (i < n - 1 && separator != NULL)
		printf("%d%s", va_arg(ap, int), separator);
	else 
		printf("%d", va_arg(ap, int));
}
	printf("\n");
	va_end(ap);
}
