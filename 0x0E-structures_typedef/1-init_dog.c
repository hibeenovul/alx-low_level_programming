#include "dog.h"

/**
 * init_dog - initializing struct dog variable
 * @d: structure of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
