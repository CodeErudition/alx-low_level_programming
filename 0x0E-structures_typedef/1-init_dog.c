#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes a variable of
 * type struct dog
 *
 * @d: pointer to struct dog to be initialize
 * @name: name to be initialize
 * @age: age to be initialize
 * @owner: owner to be initialize
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog) * 1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

