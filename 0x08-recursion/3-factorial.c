#include "main.h"
/**
 * factorial - a function that finds the factorial of numbers
 * @n: a number
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
