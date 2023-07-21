#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Write a function that creates a new dog
 * @name: name value of struct dog
 * @age: age value of struct dog
 * @owner: owner value of struct dog
 *
 * Return: address to struct dog
 *  */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog a_dog;
	
	a_dog = malloc(sizeof(struct dog));

	a_dog->name = name;
	a_dog-> age = age;
	a_dog->owner = owner;

	return a_dog;
}
