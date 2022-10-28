#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);

unsigned int binary_to_uint(const char *b)
{
	unsigned int rem, result, base;
	
	result = 0;
	base = 1;

	if (b != "1" || b != "0" || b == NULL)
		return (0);
	else
	{
		while(b)
		{
			rem = b % 10;
			result += rem * base;
			*b = b / 10;
			base = base * 2;
		}
	}
	return (result);

}
int main(void)
{
	        unsigned int n;
		        n = binary_to_int("1");
			        printf("%u\n", n);
				        return (0);
}
