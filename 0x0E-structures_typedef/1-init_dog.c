#include <stdlib.h>
#include "dog.h"

/**
** init_dog - Initializes a variable of a structure dog
** @d: A pointer to structure dog to initialize
** @name: the name of the dog to initialize with
** @age: the age of the dog to initialize with
** @owner: the name of the dog's owner to initialize with
** Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
