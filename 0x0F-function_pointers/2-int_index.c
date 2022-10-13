#include "function_pointers.h"
/**
 * int_index - searches int
 * @array: willl be iterated thru
 * @size: totak no of elements
 * @cmp: function that points to others
 *
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || size <= 0  || cmp ==  0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))

			return (i);
	}
	return (-1);
}
