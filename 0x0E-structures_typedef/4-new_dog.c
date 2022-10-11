#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	/*allocating memory to struct*/
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	else if (name == NULL)
	{
		free(d);
		free(owner);
		return (NULL);
	}
	else if (owner == NULL)
	{
		free(d);
		free(name);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
