#include "function_pointers.h"
#include "3-calc.h"
#include <string.h>
/**
 *get_op_func - this functiom selects the correct function to
 * perform operations requested by the user
 * @s: operator passed as argument to the program
 *
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	while (ops[i].op && s != NULL)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
