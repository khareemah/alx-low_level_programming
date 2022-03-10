#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char charType;
	int IntType;
	long longInt;
	long long longLongInt;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(IntType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);

}
