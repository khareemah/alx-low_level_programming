#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positivr_or_negative - assigns a randon number to int n everytime
 * it executes, and print it
 * Return: ALways 0 (Success)
 */
int positive_or_negative(void)
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
