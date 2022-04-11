#include <stdio.h>
#include "dog.h"

/**
* print_dog - function to print struct dog
* @d: struct dog
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
{
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: nil\n");
	if (d->age)
		printf("Age: .6.6.6.6.6.6%f\n", d->age);
	else
		printf("Age: nil\n");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: nil\n");
}

}
