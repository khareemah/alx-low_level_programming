#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
#include <stdio.h>
/*
 * main - assigns a randon number to int n everytime
 * it executes, and print it
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n  > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
