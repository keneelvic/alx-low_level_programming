#include "main.h"

/**
 * swap_int - assigns new value to the integers
 *
 * @a: the first integer being pointed to
 * @b: the second integer being pointed to
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
