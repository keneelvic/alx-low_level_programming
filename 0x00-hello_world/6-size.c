#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long longType;
	long long llType;

	printf("Size of a char: %zu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(llType));
	printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));

	return (0);
}
