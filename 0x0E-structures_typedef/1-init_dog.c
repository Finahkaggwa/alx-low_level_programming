#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initializes the dog structure
 * @d: pointer to dog structure
 * @name: parameter for dog name
 * @age: parameter for dog age
 * @owner: parameter for owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
