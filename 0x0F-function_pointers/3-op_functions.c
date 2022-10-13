#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * op_add - adds two integers and returns an integer
 * @a: para_1
 * @b: para_2
 *
 * Return: Always 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - solves difference between two numbers
 *@a: para1
 *@b: para2
 *
 * Return: Always 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - solves multiplication between two numbers
 *@a: para1
 *@b: para2
 *
 * Return: Always 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - solves div between two numbers
 *@a: para1
 *@b: para2
 *
 * Return: Always 0
 */
int op_div(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - solves remainders between two numbers
 *@a: para1
 *@b: para2
 *
 * Return: Always 0
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}


