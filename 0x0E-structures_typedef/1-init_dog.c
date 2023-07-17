#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: struct to be initialized
 * @name: value to be added in struct
 * @age: value to be added in struct
 * @owner: value to be added in struct
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return ;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
