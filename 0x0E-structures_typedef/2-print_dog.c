#include "dog.h"
#include <stdio.h>
/**
 * print_dog -entry point
 * @d: Entry of struct
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		printf(" ");
	if (d->name == 0)
		printf("Name: (nil)\n");
	if (d->age == 0)
		printf("Age: (nil)\n");
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else


	{
			printf("Name: %s\n", d->name);
			printf("Age: %.6f\n", d->age);
			printf("Owner: %s\n", d->owner);
	}
}
