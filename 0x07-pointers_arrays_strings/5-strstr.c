#include "main.h"

/**
 * *_strstr -  locates a substring
 * @haystack: string to be checked
 * @needle: substring to be located in haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] >= '\0')
	{
		if (haystack[i] == *needle)
		{
			return (haystack + i);
		}
		haystack++;
	}
	return ('\0');
}
