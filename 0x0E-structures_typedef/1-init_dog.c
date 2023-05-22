#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d:pointer to the dog variable
 * @name: name of the dog
 * @age: age to initialize
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}

