#include "main.h"

/**
 * helper - helper function fr square root
 * @n: number
 * @guess: guess number starting from 1
 * Return: Always integer.
 */
int helper(int n, int guess)
{
	if (guess * guess > n)
{
	return (-1);
}
	if (guess * guess == n)
{
	return (guess);
}
	else
{
	guess++;
	return (helper(n, guess));
}
}



/**
 * _sqrt_recursion - return natural square root
 * @n: number
 * Return: Always integer.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
{
	return (0);
}
	return (helper(n, 1));
}
