#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0(succes)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
} else if (lastDigit < 6)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
} else if (lastDigit == 0)
{
	printf("Last digit of %d is %d and is zero\n", n, lastDigit);
} else
{
	printf("Not a number");
}

	return (0);

}
