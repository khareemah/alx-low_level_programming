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
	if (d->age)
		printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
}

}
