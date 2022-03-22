#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/* betty style docs for function main goes there */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
{
	printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
}
	else if (lastDigit < 6 && lastDigit != 0)
{
	printf("Last digit of %i is %i and is less than 6 and not 0", n, lastDigit);
}
	else if (lastDigit == 0)
{
	printf("last digit of %i is %i and is \n", n, lastDigit);
}
	/* your code goes there */
	return (0);
}	
