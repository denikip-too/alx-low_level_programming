#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - pointer to the function
 * @s: operator passed as argument to the program
 * Return:  pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (!strcmp(ops[i].op, s))
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
