#include <stdio.h>
int main(void) 
{
	char charType;
	int IntType;
	long int longIntType;
	long long int longLongIntType;
	double doubleType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(IntType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));	     
	return (0);

}
