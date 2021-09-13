#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer containing string to be set
 * @to: pointer where string is set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
