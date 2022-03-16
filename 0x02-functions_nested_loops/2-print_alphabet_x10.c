#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 * Return - Alphabets
 */
void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
	_putchar('\n');
}
}
