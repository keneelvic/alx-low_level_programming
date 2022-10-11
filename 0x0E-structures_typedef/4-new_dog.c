#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = name;
	char *o = owner;
	dog_t *d;

	/*allocating memory to struct*/
	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
		d->name = n;
		d->age = age;
		d->owner = o;
	}
	else
	{
		free(d);
		free(owner);
		free(name);
		return (NULL);
	}
	return (d);
}
