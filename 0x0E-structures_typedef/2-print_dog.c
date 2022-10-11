#include "dog.h"
#include <stdio.h>
/**
 * print_dog -entry point
 * @d: Entry of struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
	else 
		printf(" ");
}
