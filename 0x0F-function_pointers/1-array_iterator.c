#include "function_pointers.h"

/**
 * array_iterator - a function that executes
 * a function given as parameter on each element of an array.
 * @array: the index of elements iterated thru.
 * @size: the total no of elements to be iterated thru
 * @action: the function pointer that points to the other functions.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
	else
		return;
}

