#include "dog.h"
/**
 * int_dog - initializes a dog
 * @d: the dog to init
 * @name: the dog's name
 * @age: the dog's age
 * @owner: owner's name
 * Return: owner's name
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
