#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";

	printf("My name is %s, and i am %.1f :) - whoof!\n", my_dog.name, my_dog.age);

	return (0);
}
