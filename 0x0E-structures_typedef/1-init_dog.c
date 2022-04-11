#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize variable of type strict dog
 * @d: First param
 * @name: Second param
 * @owner: Third param
 * @age: Fourth param
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
